
#include"SeqList.h"

void SeqListPrint(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}


void SeqListInit(SL* ps)//初始化
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void SeqListDestroy(SL* ps)//销毁
{
	free(ps->a);
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

//检查容量并扩容
void SeqListCheckcapacity(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;//定义一个newcapacity 防止直接使用原capacity
		SLDataType tmp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));//同上
		if (tmp == NULL)//如果开辟空间失败
		{
			printf("realloc fail!\n");
			exit(-1);
		}
		//如果开辟成功
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
}

//尾部插入
void SeqListPushBack(SL* ps, SLDataType value)
{
	SeqListCheckcapacity(ps);

	ps->a[ps->size] = value;
	ps->size++;
	
}

//尾部删除
void SeqListpopBack(SL* ps)
{
	assert(ps->size > 0);//防止size销毁到0后继续销毁
	ps->size--;
}

//头插
void SeqListPushFront(SL* ps, SLDataType value)
{
	SeqListCheckcapacity(ps);

	int end = ps->size - 1;
	while (end >= 0)//将原先的元素依次往后挪
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[0] = value;
	ps->size++;
}

//头删
void SeqListpopFront(SL* ps)
{
	assert(ps->size > 0);
	int begin = 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		++begin;
	}
	ps->size--;
}