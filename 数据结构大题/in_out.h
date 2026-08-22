#ifndef _IN_OUT_H
#define _IN_OUT_H

#include <stdio.h>
#include <stdlib.h>

#define MaxSize 100

typedef struct {
    int* data;
    int length;
} SqList;

void InitList(SqList* L);
void IsLegal(SqList* L);
int Length(SqList* L);
int LocateElem(SqList* L, int e);
int GetValue(SqList* L, int i);
void ListInsert(SqList* L, int i, int e);
int ListDelet(SqList* L, int i);
void PrintList(SqList* L);
void DestroyList(SqList* L);

#endif