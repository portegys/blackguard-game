/*
 * Contains functions for dealing with things that
 * happen in the future.
 *
 * @(#) daemon.c	1.0	(tep)	 9/1/2010
 *
 * Blackguard
 * Copyright (C) 2010 Tom Portegys
 * All rights reserved.
 *
 * See the file LICENSE.TXT for full copyright and licensing information.
 */

#include "rogue.h"

#define EMPTY 0
#define DAEMON -1

#define _X_ { 0, 0, 0, 0 }

struct delayed_action d_list[MAXDAEMONS] = {
	_X_, _X_, _X_, _X_, _X_, _X_, _X_, _X_, _X_, _X_,
	_X_, _X_, _X_, _X_, _X_, _X_, _X_, _X_, _X_, _X_,
};


/*
 * d_insert:
 *	Insert a function in the daemon list.
 */
struct delayed_action *
d_insert(func, arg, type, time)
int arg, type, time, (*func)();
{
	reg struct delayed_action *dev;

	if (demoncnt < MAXDAEMONS) {
		dev = &d_list[demoncnt];
		dev->d_type = type;
		dev->d_time = time;
		dev->d_func = func;
		dev->d_arg = arg;
		demoncnt += 1;
		return dev;
	}
	return NULL;
}

void
d_delete(wire)
struct delayed_action *wire;
{
	reg struct delayed_action *d1, *d2;

	for (d1 = d_list; d1 < &d_list[demoncnt]; d1++) {
		if (wire == d1) {
			for (d2 = d1 + 1; d2 < &d_list[demoncnt]; d2++)
				*d1++ = *d2;
			demoncnt -= 1;
			d1 = &d_list[demoncnt];
			d1->d_type = EMPTY;
			d1->d_func = EMPTY;
			return;
		}
	}
}
/*
 * find_slot:
 *	Find a particular slot in the table
 */
struct delayed_action *
find_slot(func)
int (*func)();
{
	reg struct delayed_action *dev;

	for (dev = d_list; dev < &d_list[demoncnt]; dev++)
		if (dev->d_type != EMPTY && func == dev->d_func)
			return dev;
	return NULL;
}

/*
 * do_daemon:
 *	Start a daemon, takes a function.
 */
void
do_daemon(func, arg, type)
int arg, type, (*func)();
{
	d_insert(func, arg, type, DAEMON);
}

/*
 * do_daemons:
 *	Run all the daemons that are active with the current
 *	flag, passing the argument to the function.
 */
void
do_daemons(flag)
int flag;
{
	reg struct delayed_action *dev;

	for (dev = d_list; dev < &d_list[demoncnt]; dev++)
		if (dev->d_type == flag && dev->d_time == DAEMON)
			(*dev->d_func)(dev->d_arg);
}

/*
 * fuse:
 *	Start a fuse to go off in a certain number of turns
 */
void
fuse(func, arg, time)
int (*func)(), arg, time;
{
	d_insert(func, arg, AFTER, time);
}

/*
 * lengthen:
 *	Increase the time until a fuse goes off
 */
void
lengthen(func, xtime)
int (*func)(), xtime;
{
	reg struct delayed_action *wire;

	for (wire = d_list; wire < &d_list[demoncnt]; wire++)
		if (wire->d_type != EMPTY && func == wire->d_func)
			wire->d_time += xtime;
}

/*
 * extinguish:
 *	Put out a fuse. Find all such fuses and kill them.
 */
void
extinguish(func)
int (*func)();
{
	reg struct delayed_action *dev;

	for (dev = d_list; dev < &d_list[demoncnt]; dev++)
		if (dev->d_type != EMPTY && func == dev->d_func)
			d_delete(dev);
}

/*
 * do_fuses:
 *	Decrement counters and start needed fuses
 */
void
do_fuses()
{
	reg struct delayed_action *dev;

	for (dev = d_list; dev < &d_list[demoncnt]; dev++) {
		if (dev->d_type == AFTER && dev->d_time > DAEMON) {
			if (--dev->d_time == 0) {
				(*dev->d_func)(dev->d_arg);
				d_delete(dev);
			}
		}
	}
}


/*
 * activity:
 *	Show wizard number of demaons and memory blocks used
 */
void
activity()
{
#ifdef WIN32
	msg("Daemons = %d : Memory Items = %d",
	    demoncnt,total);
#else
	msg("Daemons = %d : Memory Items = %d : Memory Used = %d",
	    demoncnt,total,sbrk(0));
#endif
}
