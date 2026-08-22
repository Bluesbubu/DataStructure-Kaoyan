#include<stdio.h>
#include"in_out.h"
/**从顺序表中删除具有最小值的元素（假设唯一）
 并由函数返回被删除元素的值。
 空出的位置由最后一个元素填补，
 若顺序表为空，则显示出错信息并退出运行。
*/
/*
思想：	1.先从前往后找到最小的值
		2.进行最后位置填补
		3.判断表格是否为空
*/
int DeletMinVal(SqList*L)
{
	//3.判断表格是否为空
	if (L->length == 0)
	{
		printf("表格为空！\n");
		exit(0);
	}
	//1.先从前往后找到最小的值
	int min = L->data[0];
	int i = 0;
	int index = 0;
	for (i;i < L->length;i++)
	{
		if (min > L->data[i])
		{
			min = L->data[i];
			index = i;
		}
	}
	//2.进行最后位置填补
	L->data[index] = L->data[L->length - 1];
	L->length --;
	printf("已删除最小值%d\n", min);
	return min;
}