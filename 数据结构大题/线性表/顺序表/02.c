#include<stdio.h>
#include"in_out.h"

//设计一个高效算法，将顺序表 L 的所有元素逆置。
// 要求算法的空间复杂度为 O(1)。
/*
思路：1.找一个中间变量，然后第一个位置跟最后一个位置进行对调
	  2.判断链表是否为空
	  3.如果倒转成功则输出
*/
void RevertList(SqList* L)
{
	int temp = 0;
	int i = 0;
	int	j = 0;
	for (i = 0, j = L->length-1;i < j;i++, j--)
	{
		temp = L->data[i];
		L->data[i] = L->data[j];
		L->data[j] = temp;
	}
	PrintList(L);
}