/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright 2009 Freescale Semiconductor, Inc.
 */

#ifndef _ASM_CONFIG_H_
#define _ASM_CONFIG_H_

#include <asm/processor.h>

/* Timer */
#define CONFIG_SYS_TIMER_COUNTS_DOWN
#define CONFIG_SYS_TIMER_COUNTER	(TMU_BASE + 0xc)	/* TCNT0 */
#define CONFIG_SYS_TIMER_RATE		(get_board_sys_clk() / 4)

#endif
