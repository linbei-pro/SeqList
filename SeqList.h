#pragma once

#include<stdio.h>

#include<stdlib.h>
#include<assert.h>

typedef int SLDataType;

//动态顺序表的定义
typedef struct SeqList
{
	SLDataType* a;
	int size;            //表示数组中存储了多少数据
	int capacity;        //表示数组实际能存储的空间容量大小
}SL;

void SeqListPrint(SL* ps);
//接口函数-------命名风格依照STL
void SeqListInit(SL* ps);

void SeqListCheckcapacity(SL* ps);

void SeqListDestroy(SL* ps);
void SeqListPushBack(SL* ps, SLDataType value);
void SeqListpopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType value);
void SeqListpopFront(SL* ps);