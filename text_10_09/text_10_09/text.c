#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include"SeqList.h"


int main()
{
	SL s;
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 33);
	SeqListPushBack(&s, 3);
	SeqListPrint(&s);
	SeqListPushFront(&s, 4);
	SeqListPrint(&s);
	SeqListPushFront(&s, 5);
	SeqListPrint(&s);
	SeqListPushFront(&s, 6);
	SeqListPrint(&s);
	SeqListPushFront(&s, 7);
	SeqListPushFront(&s, 7);
	SeqListPushFront(&s, 7);
	SeqListPrint(&s);
	SeqListFind(&s,11);
	SeqListInsert(&s, 4, 44);
	SeqListInsert(&s, 1, 11);
	SeqListPrint(&s);
	SeqListErase(&s,10);
	SeqListPrint(&s);

	return 0;
}