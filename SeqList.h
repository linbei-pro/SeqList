#pragma once

#include<stdio.h>

#include<stdlib.h>
#include<assert.h>

typedef int SLDataType;

//��̬˳���Ķ���
typedef struct SeqList
{
	SLDataType* a;
	int size;            //��ʾ�����д洢�˶�������
	int capacity;        //��ʾ����ʵ���ܴ洢�Ŀռ�������С
}SL;

void SeqListPrint(SL* ps);
//�ӿں���-------�����������STL
void SeqListInit(SL* ps);

void SeqListCheckcapacity(SL* ps);

void SeqListDestroy(SL* ps);
void SeqListPushBack(SL* ps, SLDataType value);
void SeqListpopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType value);
void SeqListpopFront(SL* ps);