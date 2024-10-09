#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

#include"Seqlist.h"
void IsExpand(SL* ps)
{
	if (ps->size >= ps->capacity-1)
	{
		ps->capacity *= 2;
		ps->p = (Datatype*)realloc(ps->p, sizeof(Datatype) * ps->capacity);
		if (ps->p == NULL)
		{
			printf("扩容失败\n");
			exit(-1);
		}
		printf("扩容成功\n");
	}
}

void SeqListInit(SL* ps)
{
	assert(ps);
	ps->capacity = 4;
	ps->size = 0;
	ps->p = (Datatype*)malloc(sizeof(Datatype)*4);
	if (ps->p == NULL)
	{
		printf("初始化失败\n");
		exit(-1);
	}
	memset(ps->p, 0, sizeof(Datatype) * ps->capacity);
	printf("初始化成功\n");
}

void SeqListPushBack(SL*ps, Datatype x)
{
	assert(ps);
	//判断增容
	IsExpand(ps);
	ps->p[ps->size] = x;
	ps->size++;

}

void SeqListPrint(SL* ps)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->p[i]);
	}
	printf("\n");
}

void SeqListPopBack(SL* ps)
{
	assert(ps);
	ps->p[ps->size - 1] = 0;
	ps->size--;
	printf("del succeed\n");

}

void SeqListPushFront(SL* ps, Datatype x)
{
	assert(ps);
	IsExpand(ps);
	int end = ps->size - 1;
	while (end>=0)
	{
		ps->p[end+1] = ps->p[end];
		end--;
	}
	ps->p[0] = x;
	ps->size++;

	printf("SeqListPushFront succeed\n");
}

void SeqListPopFront(SL* ps)
{
	assert(ps);
	ps->p[0] = 0;
	int i = 0;
	for (i = 0; i<ps->size-1; i++)
	{
		ps->p[i] = ps->p[i + 1];
	}
	printf("SeqListPopFront succeed\n");
}

int SeqListFind(SL* ps,Datatype x)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->p[i] == x)
		{
			printf("the number is %d\n", i+1);
			return i+1;
		}
	}
	printf("can not find\n");
		return 0;
}

void SeqListInsert(SL* ps, int n,Datatype x)
{
	assert(ps);
	if (n > ps->size)
	{
		printf("access violation\n");
		return;
	}
	IsExpand(ps);
	int i = 0;
	for (i = ps->size; i >=n; i--)
	{
		ps->p[i] = ps->p[i - 1];
	}
	ps->p[n - 1] = x;
}

void SeqListErase(SL* ps, int n)
{
	assert(ps);
	if (n > ps->size)
	{
		printf("access violation\n");
		return;
	}
	int i = 0;
	for (i = n; i < ps->size; i++)
	{
		ps->p[i-1] = ps->p[i];
	}

}