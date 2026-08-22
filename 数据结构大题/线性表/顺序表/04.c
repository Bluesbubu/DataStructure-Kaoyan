#include<stdio.h>
#include"in_out.h"
/*
从顺序表中删除具有值在给定值 s 和 t 之间（包含 s 和 t）的所有元素
，若 s>t 或顺序表为空，
则显示出错信息并退出运行
*/
/*
思路：1.先判断是否合法
	  2.设计count,从头遍历，如果不在s<=x<=t之间，则从头开始覆盖
	  3.最后输出
*/
void DeleteRegVal(SqList* L,int s,int t)
{
	IsLegal(L);
	if (s > t)
	{
		printf("信息错误！");
	}
	int count = 0;
	int i = 0;
	for (i;i < L->length;i++)
	{
		if (L->data[i]<s || L->data[i]>t)
		{
			L->data[count++] = L->data[i];
		}
	}
	L->length = count;
}