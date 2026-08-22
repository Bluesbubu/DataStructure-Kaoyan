/*
题目：线性表 (a1, a2, a3, ..., an)
中的元素递增有序且按顺序存储于计算机内。
要求设计一个算法，完成用最少时间在表中查找数值为 x 的元素，
若找到，则将其与后继元素位置相交换，
若找不到，则将其插入表中并使表中元素仍递增有序。
*/
/*
思路：二分法：根据中间值的位置来判断该x的大概范围逐步减小搜索范围
*/
#include"in_out.h"
void TwoDiv(SqList* L, int x)
{
	IsLegal(L);
	int left = 0;
	int right = L->length - 1;
	int mid = 0;
	int flag = 0;//表示未找到
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (x == L->data[mid]) {
			flag = 1;
			if (mid < L->length - 1) {  // 不是最后一个元素才交换
				int temp = L->data[mid];
				L->data[mid] = L->data[mid + 1];
				L->data[mid + 1] = temp;
			}
			break;
		}
		if (x >= L->data[mid])
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	/*
	* 这个时候mid所指的值不等于x，哪就说明x在mid所指的值的左右
	* 1,2,3,4,5
	* 0,1,2,3,4
	* [1, 3, 5, 7]，插入 x = 4
	* mid=0+3/2=1--3
	* 3<4
	* left=mid+1=2  --5
	* mid=(2+3)/2=2 --5
	* 5>4
	* right=mid-1=2-1=1 --3
	* left>right  break;
	* 2>1
	* 
	*/
	
	if (flag == 0) {
		for (int i = L->length;i > right +1;i--)
		{
			L->data[i] = L->data[i-1];
	   }
		L->data[right + 1] = x;
		L->length++;
	}
}

