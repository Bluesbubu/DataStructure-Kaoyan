#include<stdio.h>
#include"in_out.h"
/*
从有序顺序表中删除所有其值重复的元素，
使表中所有元素的值均不同。
*/
/*
思路：1.使用快慢制造，慢指针做坐标依据，快指针遍历寻找
	 2.如果快指针搜索到与慢指针不同的值时，则进行覆盖
	 3.如果快指针与慢指针的值一样，则找到与慢指针不一样的位置的坐标，
	 作为下一个慢指针的位置
	 1,2,2,2,2,3
*/
void DeleteRepVal(SqList* L)
{
	IsLegal(L);
	int slow = 0;
	int fast = 1;
	for (fast;fast < L->length;fast++)
	{
		if (L->data[fast] != L->data[slow])
		{
			L->data[++slow] = L->data[fast];
		}
	}
	L->length = slow + 1;
}