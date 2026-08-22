#include<stdio.h>
/*
题目：将两个有序顺序表合并为一个新的有序顺序表，并由函数返回结果顺序表。
*/
/*
思路：1.申请一个足够容纳两个顺序表大小的空间
		不知道长度用while循环
	  2.开始遍历比较两个表元素的大小，
	  if  L1[i]>L2[j]
	     放L2,j++
	  else
		放L1,i++
	  3.将小的元素放进新空间NewList[count++]=min]  
*/
#include"in_out.h"
#include"06.h"
SqList*LumpList(SqList* L1, SqList * L2)
{
	//1.先判断是否合法 
	if (L1->length < 0 || L1->data == NULL)
	{
		printf("错误！");
	}
	if (L2->length < 0 || L2->data == NULL)
	{
		printf("错误！");
	}
	
	//2.特殊情况处理
	if (L1->length == 0 && L2->length != 0)
	{
		return L1;
	}
	if (L2->length == 0 && L1->length != 0)
	{
		return L2;
	}
	
	//3.申请空间
	SqList* NewL = (SqList*)malloc(sizeof(SqList));
	if (NewL == NULL) {
		printf("内存分配失败！\n");
		exit(0);
	}

	NewL->data = (int*)malloc(sizeof(int) * (L1->length + L2->length));
	if (NewL->data == NULL) {
		printf("内存分配失败！\n");
		exit(0);
	}
	NewL->length = 0;
	// 4.进行比对
	int i = 0, j = 0;
	int count = 0;
	int len = L1->length + L2->length;
	while (i < L1->length && j < L2->length)
	{
		if (L1->data[i] > L2->data[j])
		{
			NewL->data[count++] = L2->data[j++];
		}
		else {
			NewL->data[count++] = L1->data[i++];
		}
	}

	//5.对剩余部分进行补充
	int k = 0;
	if (i==L1->length&&j!=L2->length)
	{
		for (k = j ;k < L2->length;k++)
		{
			NewL->data[count++] = L2->data[k];
		}
	}
	else {

		for (k = i ;k < L1->length;k++)
		{
			NewL->data[count++] = L1->data[k];
		}
	}
	NewL->length = len;
	printf("count = %d, NewL->length = %d\n", count, NewL->length);
	
	return NewL;
}