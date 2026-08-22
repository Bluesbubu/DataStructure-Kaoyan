#include "in_out.h"
#include<stdio.h>
#include<stdlib.h>
// 初始化
void InitList(SqList* L) {
    L->data = (int*)malloc(sizeof(int) * MaxSize);
    L->length = 0;
}

// 判断是否合法
void IsLegal(SqList* L) {
    if (L->data == NULL) {
        printf("初始化错误！\n");
        exit(0);
    }
}

// 求表长
int Length(SqList* L) {
    IsLegal(L);
    return L->length;
}

// 按值查找
int LocateElem(SqList* L, int e) {
    IsLegal(L);
    for (int i = 0; i < L->length; i++) {
        if (L->data[i] == e) {
            return i;
        }
    }
    return -1;
}

// 按位查找
int GetValue(SqList* L, int i) {
    IsLegal(L);
    if (i >= L->length) {
        return 0;
    }
    return L->data[i];
}

// 插入操作
void ListInsert(SqList* L, int i, int e) {
    IsLegal(L);
    if (i > L->length || i < 0) {
        printf("插入位置不合法\n");
        exit(0);
    }
    if (L->length >= MaxSize) {
        printf("顺序表已满，无法插入！\n");
        exit(0);
    }
    for (int index = L->length; index > i; index--) {
        L->data[index] = L->data[index - 1];
    }
    L->data[i] = e;
    L->length++;
    printf("在顺序表的第 %d 处插入元素 %d 成功！\n", i, e);
}

// 删除操作
int ListDelet(SqList* L, int i) {
    IsLegal(L);
    if (i >= L->length) {
        printf("该位置非法！");
        exit(0);
    }
    int e = L->data[i];
    for (int j = i; j < L->length - 1; j++) {
        L->data[j] = L->data[j + 1];
    }
    L->length--;
    return e;
}

// 打印所有元素
void PrintList(SqList* L) {
    IsLegal(L);
    for (int i = 0; i < L->length; i++) {
        printf("%d ", L->data[i]);
    }
    printf("\n");
}

// 销毁操作
void DestroyList(SqList* L) {
    if (L->data != NULL) {
        free(L->data);
        L->data = NULL;
        L->length = 0;
    }
}