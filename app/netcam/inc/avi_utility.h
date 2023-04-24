/*!
*****************************************************************************
** FileName     : avi_utility.h
**
** Description  : avi utility api.
**
** Author       : Bruce <zhaoquanfeng@gokemicro.com>
** Create       : 2015-8-11, create
**
** (C) Copyright 2013-2014 by GOKE MICROELECTRONICS CO.,LTD
**
*****************************************************************************
*/

#ifndef __AVI_UTILITY_H__
#define __AVI_UTILITY_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "avi_common.h"



/**********************************************************************
������������AVI�ļ���д��һ���ַ�
��ڲ�����FILE *file: �ļ�ָ��
          char c: д����ַ�
����ֵ��  1: д����ȷ
          ��1: ʧ��
**********************************************************************/
extern int write_char(FILE *file, char c);

/**********************************************************************
������������AVI�ļ���д��һ������
��ڲ�����FILE *file: �ļ�ָ��
          int i: д�������
����ֵ��  1: д����ȷ
          ��1: ʧ��
**********************************************************************/
extern int write_int32(FILE *file, int i);

/**********************************************************************
������������AVI�ļ���д��һ������
��ڲ�����FILE *file: �ļ�ָ��
          int fourcc: д�������
����ֵ��  1: д����ȷ
          ��1: ʧ��
**********************************************************************/
extern int write_fourcc(FILE *file, int fourcc);

/**********************************************************************
������������AVI�ļ���д��һ������
��ڲ�����FILE *file: �ļ�ָ��
          char *data: д������ݵ�ַ
          int size: д������ݴ�С
����ֵ��  1: д����ȷ
          ��1: ʧ��
**********************************************************************/
extern int avi_write_data(FILE *file, char *data, int size);

/**********************************************************************
������������AVI�ļ��ж�ȡһ���ַ�
��ڲ�����FILE *file: �ļ�ָ��
          char c: ��ȡ���ַ�
����ֵ��  1: ��ȡ��ȷ
          ��1: ʧ��
**********************************************************************/
extern int read_char(FILE *file, char *c);

/**********************************************************************
������������AVI�ļ��ж�ȡһ������
��ڲ�����FILE *file: �ļ�ָ��
          int i: ��ȡ������
����ֵ��  1: ��ȡ��ȷ
          ��1: ʧ��
**********************************************************************/
extern int read_int32(FILE *file, int *i);

/**********************************************************************
������������AVI�ļ��ж�ȡһ������
��ڲ�����FILE *file: �ļ�ָ��
          int fourcc: ��ȡ������
����ֵ��  1: ��ȡ��ȷ
          ��1: ʧ��
**********************************************************************/
extern int read_fourcc(FILE *file, int *fourcc);

/**********************************************************************
������������AVI�ļ��ж�ȡһ������
��ڲ�����FILE *file: �ļ�ָ��
          char *data: ��ȡ�����ݵ�ַ
          int size: ��ȡ�����ݴ�С
����ֵ��  1: ��ȡ��ȷ
          ��1: ʧ��
**********************************************************************/
extern int avi_utility_read_data(FILE *file, unsigned char *data, int size);

/**********************************************************************
�������������ڴ��ַ��д��һ������
��ڲ�����void *pp: �ڴ��ַ
          int w: д�������
����ֵ��  1: д����ȷ
          ��1: ʧ��
**********************************************************************/
extern void avi_set_32(void *pp, int w);

/**********************************************************************
�������������ַ����н�ȡ�ַ���
��ڲ�����char *dest: Ŀ���ַ���
          char *src: Դ�ַ���
          int start: ��ȡ����ʼ�±�λ�ã�0��ʼ
          int end: ��ȡ�Ľ����±�λ�ã�end - start���ǽ�ȡ���ַ�������
����ֵ��  ��
**********************************************************************/
extern void avi_substring(char *dest, char *src, int start, int end);

/**********************************************************************
�����������õ��ַ�����ĳ�ַ����±�λ��
��ڲ�����char *src: Դ�ַ���
          char c: ���ҵ��ַ�
����ֵ��  int: �ҵ��򷵻ظ��ַ����±�λ�ã����û�и��ַ����򷵻�-1
**********************************************************************/
extern int last_index_at(char *str, char c);

/**********************************************************************
������������avi�ļ����õ�ͨ����
��ڲ�����char *file_name: avi�ļ���(����·����)
����ֵ��  unsigned long: ͨ����
**********************************************************************/
extern unsigned long avi_get_ch_num(char *file_name);

/**********************************************************************
������������avi�ļ����õ���ʼʱ��
��ڲ�����char *file_name: avi�ļ���(����·����)
����ֵ��  unsigned long long: ��ʼʱ��
**********************************************************************/
extern unsigned long long avi_get_start_time(char *file_name);

/**********************************************************************
������������avi�ļ����õ�����ʱ��
��ڲ�����char *file_name: avi�ļ���(����·����)
����ֵ��  unsigned long long: ����ʱ��
**********************************************************************/
extern unsigned long long avi_get_stop_time(char *file_name);

/**********************************************************************
�����������õ���ǰ���ڵ��ַ�����ʽ
��ڲ�����char *str: ��ǰ���ڵ��ַ�����ʽ
����ֵ��  ��
**********************************************************************/
extern void get_date_str(char *str);

/**********************************************************************
�����������õ���ǰʱ����ַ�����ʽ
��ڲ�����char *str: ��ǰʱ����ַ�����ʽ
����ֵ��  ��
**********************************************************************/
extern void get_nowtime_str(char *str);
extern void get_nowhm_str(char *str);
extern unsigned int get_nowtime_uint();


/**********************************************************************
������������ʱ��� timetick ת���� AVI_DMS_TIME ���͵����ݽṹ
��ڲ�����AVI_DMS_TIME *ptime: AVI_DMS_TIME ���͵�ָ�룬��¼ʱ��
          int timetick: ʱ���������Ϊ��λ
����ֵ��  ��
**********************************************************************/
extern void timetick_to_time(AVI_DMS_TIME *ptime, unsigned int timetick);


/**********************************************************************
����������AVI_DMS_TIME ����ʱ��ת���� unsigned long long ����ʱ��
��ڲ�����AVI_DMS_TIME *p: AVI_DMS_TIME ����ʱ��
����ֵ��  u64t: unsigned long long ����ʱ��
**********************************************************************/
extern u64t time_to_u64t(AVI_DMS_TIME *p);

/**********************************************************************
����������unsigned long long ����ʱ��ת���� AVI_DMS_TIME ����ʱ��
��ڲ�����AVI_DMS_TIME *ptime: �õ� AVI_DMS_TIME ����ʱ��
          u64t tmp64: unsigned long long ����ʱ��
����ֵ��  ��
**********************************************************************/
extern void u64t_to_time(AVI_DMS_TIME *ptime, u64t tmp64);

/**********************************************************************
����������ʱ���tm��ʽת����ʱ���AVI_DMS_TIME��ʽ
��ڲ�����struct tm *src: Դ������
          AVI_DMS_TIME *dst: Ŀ�������
����ֵ��  ��
**********************************************************************/
void tm_to_dmstime(AVI_DMS_TIME *dst, struct tm *src);

/**********************************************************************
����������ʱ���tm��ʽ�����������õ�ʱ���tm��ʽ
��ڲ�����struct tm *dst: Ŀ�������
          struct tm *src: ��һ��������
          int seconds: �ڶ���������
����ֵ��  ��
**********************************************************************/
void tm_add_seconds(struct tm *dst, struct tm *src, int time_seconds);

/**********************************************************************
����������ʱ���u64t��ʽ����������������Ӻ��ֵ
��ڲ�����u64t opr1: ��һ��������
          int seconds: �ڶ���������
����ֵ��  u64t: ��Ӻ��ֵ
**********************************************************************/
u64t u64t_add_seconds(u64t opr1, int seconds);

/**********************************************************************
��������������2��ʱ��Ĳ�ֵ��
��ڲ�����u64t opr1: ��һ��������
          u64t opr2: �ڶ���������
����ֵ��  u64t: opr1 ��ȥ opr2
**********************************************************************/
int cal_time_sub(u64t opr1, u64t opr2);

u64t get_u64t_now_time(void);

void time_to_str(long ts, char *str);
u64t get_time_to_u64t(long ts);

//¼��ƻ���ʱ�����ݽṹ
typedef struct tagGK_SCHEDTIME_POINT
{
    unsigned short  wStartYear;
    unsigned char   byStartMonth;
    unsigned char   byStartDate;
    unsigned char   byStartHour;
    unsigned char   byStartMin;
    unsigned char   byStartSecond;
    unsigned short  wStopYear;
    unsigned char   byStopMonth;
    unsigned char   byStopDate;
    unsigned char   byStopHour;
    unsigned char   byStopMin;
    unsigned char   byStopSecond;
} GK_SCHEDTIME_POINT;


/* �뼶��ʱ�� */
void gk_cms_ssleep(unsigned seconds);

/* ���뼶��ʱ�� */
void gk_cms_msleep(unsigned long mSec);


// type =1 ����ϵͳ�����룬type=2 ����ϵͳ����ms

unsigned long avi_get_sys_runtime(int type);

#ifdef __cplusplus
}
#endif
#endif
