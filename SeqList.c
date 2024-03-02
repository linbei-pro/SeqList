
#include"SeqList.h"

void SeqListPrint(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}


void SeqListInit(SL* ps)//��ʼ��
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void SeqListDestroy(SL* ps)//����
{
	free(ps->a);
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

//�������������
void SeqListCheckcapacity(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;//����һ��newcapacity ��ֱֹ��ʹ��ԭcapacity
		SLDataType tmp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));//ͬ��
		if (tmp == NULL)//������ٿռ�ʧ��
		{
			printf("realloc fail!\n");
			exit(-1);
		}
		//������ٳɹ�
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
}

//β������
void SeqListPushBack(SL* ps, SLDataType value)
{
	SeqListCheckcapacity(ps);

	ps->a[ps->size] = value;
	ps->size++;
	
}

//β��ɾ��
void SeqListpopBack(SL* ps)
{
	assert(ps->size > 0);//��ֹsize���ٵ�0���������
	ps->size--;
}

//ͷ��
void SeqListPushFront(SL* ps, SLDataType value)
{
	SeqListCheckcapacity(ps);

	int end = ps->size - 1;
	while (end >= 0)//��ԭ�ȵ�Ԫ����������Ų
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[0] = value;
	ps->size++;
}

//ͷɾ
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