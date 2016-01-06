/*
Copyright (C) 2015 The University of Notre Dame
This software is distributed under the GNU General Public License.
See the file LICENSE for details.
*/

#ifndef CONSOLE_H
#define CONSOLE_H

#include "kerneltypes.h"
#include "string.h"

void console_init();
void console_putchar( char c );
int  console_write( int unit, const void *buffer, int nblocks, int offset );
void console_heartbeat();
void console_startprompt();
void console_prompt();
void console_changebgcolor( uint8_t r, uint8_t g, uint8_t b );
void console_changefgcolor( uint8_t r, uint8_t g, uint8_t b );
int console_getxpos();
int console_getypos();

#define console_printf printf

#endif
