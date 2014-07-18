/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2008
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/
/*****************************************************************************
 *
 * Filename:
 * ---------
 *   custom_emi.c
 *
 * Project:
 * --------
 *   Android
 *
 * Description:
 * ------------
 *   This Module defines the EMI (external memory interface) related setting.
 *
 * Author:
 * -------
 *  EMI auto generator V0.01
 *
 *   Memory Device database last modified on 2013/5/17
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision$
 * $Modtime$
 * $Log$
 *
 *------------------------------------------------------------------------------
 * WARNING!!!  WARNING!!!   WARNING!!!  WARNING!!!  WARNING!!!  WARNING!!! 
 * This file is generated by EMI Auto-gen Tool.
 * Please do not modify the content directly!
 * It could be overwritten!
 *============================================================================
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "mt_emi.h"

#define NUM_EMI_RECORD (1)

int num_of_emi_records = NUM_EMI_RECORD ;

EMI_SETTINGS emi_settings[] =
{
     
	//SD5C28B_16G_MMD2
	{
		0x1,		/* sub_version */
		0x0202,		/* TYPE */
		9,		/* EMMC ID/FW ID checking length */
		6,		/* FW length */
		{0x45,0x01,0x00,0x53,0x45,0x4D,0x31,0x36,0x47,0x0,0x0,0x0,0x0,0x0,0x0,0x0},		/* NAND_EMMC_ID */
		{0x39,0x37,0x66,0x49,0x7A,0x48,0x0,0x0},		/* FW_ID */
		0x0002A3AE,		/* EMI_CONA_VAL */
		0xCC00CC00,		/* DRAMC_DRVCTL0_VAL */
		0xCC00CC00,		/* DRAMC_DRVCTL1_VAL */
		0x00000008,		/* DRAMC_DLE_VAL */
		0x556844A4,		/* DRAMC_ACTIM_VAL */
		0x11000000,		/* DRAMC_GDDR3CTL1_VAL */
		0xF07486E1,		/* DRAMC_CONF1_VAL */
		0xC0063201,		/* DRAMC_DDR2CTL_VAL */
		0x9F098CA0,		/* DRAMC_TEST2_3_VAL */
		0x0340633F,		/* DRAMC_CONF2_VAL */
		0x11642342,		/* DRAMC_PD_CTRL_VAL */
		0x00008888,		/* DRAMC_PADCTL3_VAL */
		0xEEEEEEEE,		/* DRAMC_DQODLY_VAL */
		0x00000000,		/* DRAMC_ADDR_OUTPUT_DLY */
		0x00000000,		/* DRAMC_CLK_OUTPUT_DLY */
		0x01000610,		/* DRAMC_ACTIM1_VAL*/
		0x07000000,		/* DRAMC_MISCTL0_VAL*/
		{0x20000000,0x20000000,0,0},		/* DRAM RANK SIZE */
		0x2,		/* MMD info */
		{0,0,0,0,0,0,0,0},		/* reserved 8 */
		0x00C30001,		/* DDR2_MODE_REG1 */
		0x00060002,		/* DDR2_MODE_REG2 */
		0x00020003,		/* DDR2_MODE_REG3 */
		0x00FF000A,		/* DDR2_MODE_REG10 */
		0x0000003F,		/* DDR2_MODE_REG63 */
		0x03,		/* DDR2_MODE_REG5 */
	} ,
};
