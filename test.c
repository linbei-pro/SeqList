
#include"SeqList.h"


void Test()
{
	SL sl;
	SeqListInit(&sl);
	//β��
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);

	SeqListPrint(&sl);
	//βɾ
	SeqListpopBack(&sl);
	SeqListpopBack(&sl);
	SeqListPrint(&sl);
	//ͷ��
	SeqListPushFront(&sl, 10);
	SeqListPushFront(&sl, 20);
	SeqListPushFront(&sl, 30);

	SeqListPrint(&sl);

	//ͷɾ
	SeqListpopFront(&sl);
	SeqListpopFront(&sl);

	SeqListPrint(&sl);
}
int main() {

	Test();

	return 0;
}