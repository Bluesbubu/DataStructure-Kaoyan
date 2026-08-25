/*
题目：给定三个序列 A、B、C，长度均为 n，且均为无重复元素的递增序列。
请设计一个时间复杂度为 O(n) 的算法，
输出同时存在于这三个序列中的所有元素。
思路：
[2,3,4]
[-1,0,2]
[1,2,3]
		1.首先比较三个值是否相等
		2.若不相等：以最大为依据移动另外两个
		3.若相等，加入到新数组
*/
#include<in_out.h>
#define N 5
int findMax(int a, int b, int c)
{
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	return max;
}
int* comVal(SqList* L1, SqList* L2, SqList* L3,int*returnSize)
{
	int*arr=(int*)malloc(sizeof(int)*L1->length);
	if (arr == NULL) {
		printf("内存分配失败！\n");
		exit(0);
	}
	int j=0, i = 0, k = 0;
	int count = 0;
	while (i<L1->length&&j<L2->length&&k<L3->length)
	{
		if (L1->data[i] == L2->data[j] && L1->data[i] == L3->data[k])
		{
			arr[count++] = L1->data[i];
			i++;
			j++;
			k++;
		}
		else {
			
			int index = findMax(L1->data[i], L2->data[j], L3->data[k]);
			if (L1->data[i] < index) i++;
			if (L2->data[j] < index)j++;
			if (L3->data[k] < index)k++;
			
		}
	}
	*returnSize = count;
	return arr;
}

