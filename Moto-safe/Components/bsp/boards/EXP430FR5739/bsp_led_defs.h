/**************************************************************************************************
  Revised:        $Date: 2007-07-06 11:19:00 -0700 (Fri, 06 Jul 2007) $
  Revision:       $Revision: 13579 $

  Copyright 2007 Texas Instruments Incorporated.  All rights reserved.

  IMPORTANT: Your use of this Software is limited to those specific rights granted under
  the terms of a software license agreement between the user who downloaded the software,
  his/her employer (which must be your employer) and Texas Instruments Incorporated (the
  "License"). You may not use this Software unless you agree to abide by the terms of the
  License. The License limits your use, and you acknowledge, that the Software may not be
  modified, copied or distributed unless embedded on a Texas Instruments microcontroller
  or used solely and exclusively in conjunction with a Texas Instruments radio frequency
  transceiver, which is integrated into your product. Other than for the foregoing purpose,
  you may not use, reproduce, copy, prepare derivative works of, modify, distribute,
  perform, display or sell this Software and/or its documentation for any purpose.

  YOU FURTHER ACKNOWLEDGE AND AGREE THAT THE SOFTWARE AND DOCUMENTATION ARE PROVIDED �AS IS�
  WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY
  WARRANTY OF MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
  IN NO EVENT SHALL TEXAS INSTRUMENTS OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER CONTRACT,
  NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR OTHER LEGAL EQUITABLE
  THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES INCLUDING BUT NOT LIMITED TO ANY
  INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST
  DATA, COST OF PROCUREMENT OF SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY
  THIRD PARTIES (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

  Should you have any questions regarding your right to use this Software,
  contact Texas Instruments Incorporated at www.TI.com.
**************************************************************************************************/

/* =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
 *   BSP (Board Support Package)
 *   Target : Texas Instruments MSP-EXP430FR5739
 *
 *   LED definition file.
 * =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
 */

#ifndef BSP_LED_DEFS_H
#define BSP_LED_DEFS_H


/* ------------------------------------------------------------------------------------------------
 *                                           Includes
 * ------------------------------------------------------------------------------------------------
 */
#include "bsp_board_defs.h"


/* ------------------------------------------------------------------------------------------------
 *                                         Configuration
 * ------------------------------------------------------------------------------------------------
 */
#define __bsp_NUM_LEDS__               8
#define __bsp_LED_BLINK_LOOP_COUNT__   0x34000


/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *                 LED #1
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *   Schematic :  LED1
 *   Color     :  Blue
 *   Polarity  :  Active High
 *   GPIO      :  PJ.0
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */
#define __bsp_LED1_BIT__            0
#define __bsp_LED1_PORT__           PJOUT
#define __bsp_LED1_DDR__            PJDIR
#define __bsp_LED1_IS_ACTIVE_LOW__  0


/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *                 LED #2
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *   Schematic :  LED2
 *   Color     :  Blue
 *   Polarity  :  Active High
 *   GPIO      :  PJ.1
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */
#define __bsp_LED2_BIT__            1
#define __bsp_LED2_PORT__           PJOUT
#define __bsp_LED2_DDR__            PJDIR
#define __bsp_LED2_IS_ACTIVE_LOW__  0

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *                 LED #3
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *   Schematic :  LED3
 *   Color     :  Blue
 *   Polarity  :  Active High
 *   GPIO      :  PJ.2
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */
#define __bsp_LED3_BIT__            2
#define __bsp_LED3_PORT__           PJOUT
#define __bsp_LED3_DDR__            PJDIR
#define __bsp_LED3_IS_ACTIVE_LOW__  0


/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *                 LED #4
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *   Schematic :  LED4
 *   Color     :  Blue
 *   Polarity  :  Active High
 *   GPIO      :  PJ.3
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */
#define __bsp_LED4_BIT__            3
#define __bsp_LED4_PORT__           PJOUT
#define __bsp_LED4_DDR__            PJDIR
#define __bsp_LED4_IS_ACTIVE_LOW__  0

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *                 LED #5
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *   Schematic :  LED5
 *   Color     :  Blue
 *   Polarity  :  Active High
 *   GPIO      :  P3.4
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */
#define __bsp_LED5_BIT__            4
#define __bsp_LED5_PORT__           P3OUT
#define __bsp_LED5_DDR__            P3DIR
#define __bsp_LED5_IS_ACTIVE_LOW__  0


/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *                 LED #6
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *   Schematic :  LED6
 *   Color     :  Blue
 *   Polarity  :  Active High
 *   GPIO      :  P3.5
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */
#define __bsp_LED6_BIT__            5
#define __bsp_LED6_PORT__           P3OUT
#define __bsp_LED6_DDR__            P3DIR
#define __bsp_LED6_IS_ACTIVE_LOW__  0

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *                 LED #7
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *   Schematic :  LED7
 *   Color     :  Blue
 *   Polarity  :  Active High
 *   GPIO      :  P3.6
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */
#define __bsp_LED7_BIT__            6
#define __bsp_LED7_PORT__           P3OUT
#define __bsp_LED7_DDR__            P3DIR
#define __bsp_LED7_IS_ACTIVE_LOW__  0


/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *                 LED #8
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *   Schematic :  LED8
 *   Color     :  Blue
 *   Polarity  :  Active High
 *   GPIO      :  P3.7
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */
#define __bsp_LED8_BIT__            7
#define __bsp_LED8_PORT__           P3OUT
#define __bsp_LED8_DDR__            P3DIR
#define __bsp_LED8_IS_ACTIVE_LOW__  0

/* ------------------------------------------------------------------------------------------------
 *                                 Include Generic LED Macros
 * ------------------------------------------------------------------------------------------------
 */
#include "code/bsp_generic_leds.h"


/**************************************************************************************************
 */
#endif
