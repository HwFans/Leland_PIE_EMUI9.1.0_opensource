/*
 * Copyright (C) Huawei Technologies Co., Ltd. 2012-2018. All rights reserved.
 * foss@huawei.com
 *
 * If distributed as part of the Linux kernel, the following license terms
 * apply:
 *
 * * This program is free software; you can redistribute it and/or modify
 * * it under the terms of the GNU General Public License version 2 and
 * * only version 2 as published by the Free Software Foundation.
 * *
 * * This program is distributed in the hope that it will be useful,
 * * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * * GNU General Public License for more details.
 * *
 * * You should have received a copy of the GNU General Public License
 * * along with this program; if not, write to the Free Software
 * * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA
 *
 * Otherwise, the following license terms apply:
 *
 * * Redistribution and use in source and binary forms, with or without
 * * modification, are permitted provided that the following conditions
 * * are met:
 * * 1) Redistributions of source code must retain the above copyright
 * *    notice, this list of conditions and the following disclaimer.
 * * 2) Redistributions in binary form must reproduce the above copyright
 * *    notice, this list of conditions and the following disclaimer in the
 * *    documentation and/or other materials provided with the distribution.
 * * 3) Neither the name of Huawei nor the names of its contributors may
 * *    be used to endorse or promote products derived from this software
 * *    without specific prior written permission.
 *
 * * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef __PSTYPEDEF_H__
#define __PSTYPEDEF_H__


/*****************************************************************************
  1 Include Headfile
*****************************************************************************/

#include "vos.h"
/*****************************************************************************
  1.1 Cplusplus Announce
*****************************************************************************/
#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#if (VOS_OS_VER != VOS_WIN32)
#pragma pack(4)
#else
#pragma pack(push, 4)
#endif

/*****************************************************************************
  2 macro
*****************************************************************************/
#define PS_NULL_UINT8                   (0xFF)
#define PS_NULL_UINT16                  (0xFFFF)
#define PS_NULL_UINT32                  (0xFFFFFFFFUL)
#define PS_NULL_INT8                    (0x7F)
#define PS_NULL_INT16                   (0x7FFF)
#define PS_NULL_INT32                   (0x7FFFFFFF)
#define PS_NEG_ONE                      (-1)

/* Э��ջͳһBITλ��ֵ�궨�� */
#define PS_IE_NOT_PRESENT               PS_FALSE   /*GUģʹ�ã�����*/
#define PS_IE_ABSENT                    PS_FALSE
#define PS_IE_PRESENT                   PS_TRUE
#define PS_IE_MODIFIED                  2

#define PS_DISABLE                      1
#define PS_ENABLE                       2

#define THREAD_PRI_ERRC VOS_PRIORITY_BASE

/* UE�����궨�� */
#define PS_CAP_UNSUPPORT                0
#define PS_CAP_SUPPORT                  1



/*****************************************************************************
  3 Massage Declare
*****************************************************************************/



/*****************************************************************************
  4 Enum
*****************************************************************************/

/*****************************************************************************
 ö����    : PS_BOOL_ENUM
 Э�����  :
 ASN.1���� :
 ö��˵��  : PSͳһ��������ö�ٶ���
*****************************************************************************/
enum PS_BOOL_ENUM
{
    PS_FALSE                            = 0,
    PS_TRUE                             = 1,
    PS_BOOL_BUTT
};
typedef VOS_UINT8   PS_BOOL_ENUM_UINT8;

/*****************************************************************************
 ö����    : PS_RSLT_CODE_ENUM
 Э�����  :
 ASN.1���� :
 ö��˵��  : Э��ջͳһ����ֵö�ٶ���
*****************************************************************************/
enum PS_RSLT_CODE_ENUM
{
    PS_SUCC                             = 0,
    PS_FAIL                             = 1,

    PS_PTR_NULL                         = 2,    /*��ָ��*/
    PS_PARA_ERR                         = 3,    /*��������*/
    PS_STATE_ERR                        = 4,    /*״̬����*/
    PS_MODE_ERR                         = 5,    /*ģʽ����*/
    PS_SCOPE_ERR                        = 6,    /*��Χ����*/
    PS_MEM_ALLOC_FAIL                   = 7,    /*�ڴ����ʧ��*/
    PS_MSG_ALLOC_FAIL                   = 8,    /*��Ϣ����ʧ��*/
    PS_MSG_SEND_FAIL                    = 9,    /*��Ϣ����ʧ��*/
    PS_TIMER_ERR                        = 10,   /*��ʱ������*/
    PS_TIMER_OUT                        = 11,   /*��ʱ����ʱ*/
    PS_QUE_FULL                         = 12,   /*������*/
    PS_QUE_EMPTY                        = 13,   /*���п�*/

    PS_RSLT_CODE_BUTT
};
typedef VOS_UINT32   PS_RSLT_CODE_ENUM_UINT32;

/*����ö��*/
enum PS_SWITCH_ENUM
{
    PS_SWITCH_OFF = 0,
    PS_SWITCH_ON  = 1
};


/*****************************************************************************
  5 STRUCT
*****************************************************************************/

/*****************************************************************************
 �ṹ��    : PS_MSG_HEADER_STRU
 Э�����  :
 ASN.1���� :
 �ṹ˵��  : ��Ϣͷ����
*****************************************************************************/
typedef VOS_UINT32 PS_NULL_STRU;
/* GUʹ�ã���������Ϣͷ���壬Ϊ�˼���4121���� */
typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                          ulMsgName;
}MSG_HEADER_STRU;

/*Lģʹ��*/
typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                          ulMsgName;
}PS_MSG_HEADER_STRU;

/*Lģʹ��*/
typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                          ulMsgName;
    VOS_UINT16                          usOpId;
	VOS_UINT8                           aucRsv[2];
}LHPA_MSG_HEADER_STRU;

/* add for Balong CL begin */
typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT16                          usMsgName;
    VOS_UINT8                           aucRsv[2];
}CAS_MSG_HEADER_STRU;
/* add for Balong CL end */
/*****************************************************************************
  6 UNION
*****************************************************************************/


/*****************************************************************************
  7 Extern Global Variable
*****************************************************************************/


/*****************************************************************************
  8 Fuction Extern
*****************************************************************************/



/*****************************************************************************
  9 OTHERS
*****************************************************************************/




#if (VOS_OS_VER != VOS_WIN32)
#pragma pack()
#else
#pragma pack(pop)
#endif




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of PsTypeDef.h */
