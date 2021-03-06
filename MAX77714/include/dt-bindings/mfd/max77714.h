/*
 * This header provides macros for MAXIM MAX77714 device bindings.
 *
 * Copyright (C) 2018 Maxim Integrated. All rights reserved.
 *
 * Author:
 *	Daniel Jeong <daniel.jeong@maximintegrated.com>
 *	Maxim LDD <opensource@maximintegrated.com>
 */

#ifndef _DT_BINDINGS_MFD_MAX77714_H
#define _DT_BINDINGS_MFD_MAX77714_H

/* MAX77714 interrupts */
#define MAX77714_IRQ_TOP_GLBL		0 /* Low-Battery */
#define MAX77714_IRQ_TOP_SD		1 /* SD power fail */
#define MAX77714_IRQ_TOP_LDO		2 /* LDO power fail */
#define MAX77714_IRQ_TOP_GPIO		3 /* GPIO internal int to MAX77714 */
#define MAX77714_IRQ_TOP_RTC		4 /* RTC */
#define MAX77714_IRQ_TOP_32K		5 /* 32kHz oscillator */
#define MAX77714_IRQ_TOP_ONOFF		6 /* ON/OFF oscillator */
#define MAX77714_IRQ_LBT_MBATLOW	7 /* Thermal alarm status, > 120C */
#define MAX77714_IRQ_LBT_TJALRM1	8 /* Thermal alarm status, > 120C */
#define MAX77714_IRQ_LBT_TJALRM2	9 /* Thermal alarm status, > 140C */

/* FPS event source */
#define MAX77714_FPS_EVENT_SRC_EN0		0
#define MAX77714_FPS_EVENT_SRC_EN1		1
#define MAX77714_FPS_EVENT_SRC_SW		2


#define MAX77714_LPM_ENABLE	0x10
#define MAX77714_SLEEP_ENABLE	0x04

/* Device state when FPS event LOW  */
#define MAX77714_FPS_INACTIVE_STATE_SLEEP	0
#define MAX77714_FPS_INACTIVE_STATE_LOW_POWER	1


/* FPS Configuration */
#define MAX77714_FPS_SRC_0			0
#define MAX77714_FPS_SRC_1			1
#define MAX77714_FPS_SRC_NONE			3
#define MAX77714_FPS_SRC_DEF			4


#define MAX77714_FPS_0_SRC_HW_EN      0
#define MAX77714_FPS_0_SRC_SW_EN      0x10
#define MAX77714_FPS_0_DISABLE           0x00
#define MAX77714_FPS_0_ENABLE            0x08

#define MAX77714_FPS_1_SRC_HW_EN      0
#define MAX77714_FPS_1_SRC_SW_EN      0x04
#define MAX77714_FPS_1_DISABLE           0x00
#define MAX77714_FPS_1_ENABLE            0x02

#define MAX77714_FPS_SHDN_EVENT_RESET   0x40
#define MAX77714_FPS_SHDN_EVENT_PWROFF  0x02

#define MAX77714_FPS_EVENT_PU_PERIOD_31us      0x00
#define MAX77714_FPS_EVENT_PU_PERIOD_63us      0x10
#define MAX77714_FPS_EVENT_PU_PERIOD_127us     0x20
#define MAX77714_FPS_EVENT_PU_PERIOD_253us     0x30
#define MAX77714_FPS_EVENT_PU_PERIOD_508us     0x40
#define MAX77714_FPS_EVENT_PU_PERIOD_984us     0x50
#define MAX77714_FPS_EVENT_PU_PERIOD_1936us    0x60
#define MAX77714_FPS_EVENT_PU_PERIOD_3904us    0x70

#define MAX77714_FPS_EVENT_PD_PERIOD_31us      0x00
#define MAX77714_FPS_EVENT_PD_PERIOD_63us      0x01
#define MAX77714_FPS_EVENT_PD_PERIOD_127us     0x02
#define MAX77714_FPS_EVENT_PD_PERIOD_253us     0x03
#define MAX77714_FPS_EVENT_PD_PERIOD_508us     0x04
#define MAX77714_FPS_EVENT_PD_PERIOD_984us     0x05
#define MAX77714_FPS_EVENT_PD_PERIOD_1936us    0x06
#define MAX77714_FPS_EVENT_PD_PERIOD_3904us    0x07

#define MAX77714_FPS_EVENT_SLEEP_ENTRY_31us      0x00
#define MAX77714_FPS_EVENT_SLEEP_ENTRY_63us      0x10
#define MAX77714_FPS_EVENT_SLEEP_ENTRY_127us     0x20
#define MAX77714_FPS_EVENT_SLEEP_ENTRY_253us     0x30
#define MAX77714_FPS_EVENT_SLEEP_ENTRY_508us     0x40
#define MAX77714_FPS_EVENT_SLEEP_ENTRY_984us     0x50
#define MAX77714_FPS_EVENT_SLEEP_ENTRY_1936us    0x60
#define MAX77714_FPS_EVENT_SLEEP_ENTRY_3904us    0x70

#define MAX77714_FPS_EVENT_SLEEP_EXIT_31us      0x00
#define MAX77714_FPS_EVENT_SLEEP_EXIT_63us      0x01
#define MAX77714_FPS_EVENT_SLEEP_EXIT_127us     0x02
#define MAX77714_FPS_EVENT_SLEEP_EXIT_253us     0x03
#define MAX77714_FPS_EVENT_SLEEP_EXIT_508us     0x04
#define MAX77714_FPS_EVENT_SLEEP_EXIT_984us     0x05
#define MAX77714_FPS_EVENT_SLEEP_EXIT_1936us    0x06
#define MAX77714_FPS_EVENT_SLEEP_EXIT_3904us    0x07

#define MAX77714_EN1_SLEEP_ENABLE   0x04

#endif
