/*
*   Copyright (c) 2016 Freescale Semiconductor, Inc. All rights reserved.
*   Copyright 2016 NXP
*
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <https://www.gnu.org/licenses/>.
*
*/


/**
 * @file                main.c
 * @description         dpaa offload application
 */

#include <stdio.h>
#include <stdlib.h>

//#define ENABLE_TESTAPP		1

extern int dpa_init(void);
extern int test_app_init(void);

int main(int argc __attribute__((unused)), char *argv[] __attribute__((unused)))
{
	if (dpa_init())
		return -1;
#ifdef ENABLE_TESTAPP
	if (test_app_init())
		return -1;
#endif
	return 0;
}
