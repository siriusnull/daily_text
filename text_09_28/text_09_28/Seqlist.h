#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

typedef int Datatype;
#define N 10

typedef struct SeqList
{
	Datatype *p;
	int size;
	int capacity;
}SL;

void SeqListInit(SL* ps);

void SeqListPushBack(SL* ps,Datatype x);

void SeqListPopBack(SL* ps);

void SeqListPrint(SL* ps);

void SeqListPushFront(SL* ps, Datatype x);

void SeqListPopFront(SL* ps);

int SeqListFind(SL* ps,Datatype x);

void SeqListInsert(SL* ps, int n,Datatype x);

void SeqListErase(SL* ps, int n);