/*
	07题目：已知在一维数组 A[m+n] 中
	依次存放两个线性表 (a1, a2, ..., am) 和 (b1, b2, ..., bn)。
	编写一个函数，将数组 A 中两个线性表的位置互换，
	即将 (b1, b2, ..., bn) 放在 (a1, a2, ..., am) 的前面。
*/
/*
	思路：三次逆置
		1.第一次：整体逆置
		2.前n部分逆置
		3，后n部分逆置
		*/
#include"in_out.h"
void Revert(SqList* L1,int left,int right)
{
	int temp = 0;
	int i,j;
	for (i=left,j=right;i < j;i++,j--)
	{
		temp = L1->data[i];
		L1->data[i] = L1->data[j];
		L1->data[j] = temp;
	}

}
void ExList(SqList* L, int m, int n)
{
	Revert(L, 0, m + n - 1);
	Revert(L, 0, n-1);
	Revert(L, n, m + n-1);
}