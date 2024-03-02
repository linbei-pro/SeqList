
#include"SeqList.h"


void Test()
{
	SL sl;
	SeqListInit(&sl);
	//Î²²å
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);

	SeqListPrint(&sl);
	//Î²É¾
	SeqListpopBack(&sl);
	SeqListpopBack(&sl);
	SeqListPrint(&sl);
	//Í·²å
	SeqListPushFront(&sl, 10);
	SeqListPushFront(&sl, 20);
	SeqListPushFront(&sl, 30);

	SeqListPrint(&sl);

	//Í·É¾
	SeqListpopFront(&sl);
	SeqListpopFront(&sl);

	SeqListPrint(&sl);
}
int main() {

	Test();

	return 0;
}