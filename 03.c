#include<stdio.h>
#include"in_out.h"
/*
对长度为 n 的顺序表 L，
编写一个时间复杂度为 O(n) 的算法，
该算法删除顺序表中所有值为 x 的数据元素。
*/
/*
思路：1.设置count统计x的数量；
	  2.当遇到x时count+1；
	  3.当遇到x时，用后一个元素覆盖后一个元素；
	  4.最后n-count-1个元素中没有x;
	  5.length-count;
*/
void DeleteX(SqList* L, int x)
{
	IsLegal(L);
	int count = 0;
	int i = 0;
	for (i;i < L->length;i++)
	{
		if (L->data[i] != x)
		{
			L->data[count++] = L->data[i];
		}
	}
	L->length = count;
}