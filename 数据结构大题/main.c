#include "in_out.h"
#include"08.h"
int main() {
    // 第1题：删除最小值
    // SqList L;
    // InitList(&L);
    // ListInsert(&L, 0, 3);
    // ListInsert(&L, 1, 1);
    // ListInsert(&L, 2, 4);
    // ListInsert(&L, 3, 2);
    // PrintList(&L);
    // int min = DeletMinVal(&L);
    // printf("删除的最小值：%d\n", min);
    // PrintList(&L);
    // DestroyList(&L);

    // 第2题：逆置
    // SqList L;
    // InitList(&L);
    // ListInsert(&L, 0, 1);
    // ListInsert(&L, 1, 2);
    // ListInsert(&L, 2, 3);
    // ListInsert(&L, 3, 4);
    // ListInsert(&L, 4, 5);
    // PrintList(&L);
    // RevertList(&L);
    // DestroyList(&L);

    // 第3题：删除所有值为x的元素
    // SqList L;
    // InitList(&L);
    // ListInsert(&L, 0, 1);
    // ListInsert(&L, 1, 2);
    // ListInsert(&L, 2, 2);
    // ListInsert(&L, 3, 2);
    // ListInsert(&L, 4, 3);
    // ListInsert(&L, 5, 4);
    // PrintList(&L);
    // DeleteX(&L, 2);
    // PrintList(&L);
    // DestroyList(&L);

    // 第4题：删除值在[s, t]之间的元素
    // SqList L;
    // InitList(&L);
    // ListInsert(&L, 0, 1);
    // ListInsert(&L, 1, 2);
    // ListInsert(&L, 2, 55);
    // ListInsert(&L, 3, 0);
    // ListInsert(&L, 4, 3);
    // ListInsert(&L, 5, 2);
    // ListInsert(&L, 6, 2);
    // ListInsert(&L, 7, 2);
    // PrintList(&L);
    // DeleteRegVal(&L, 1, 2);
    // PrintList(&L);
    // DestroyList(&L);

    // 第5题：删除有序顺序表中的重复元素
    // SqList L;
    // InitList(&L);
    // ListInsert(&L, 0, 1);
    // ListInsert(&L, 1, 2);
    // ListInsert(&L, 2, 2);
    // ListInsert(&L, 3, 2);
    // ListInsert(&L, 4, 3);
    // ListInsert(&L, 5, 3);
    // ListInsert(&L, 6, 4);
    // ListInsert(&L, 7, 5);
    // PrintList(&L);
    // DeleteRepVal(&L);
    // PrintList(&L);
    // DestroyList(&L);

    //// 第6题：合并两个有序顺序表
    //SqList L1, L2;
    //InitList(&L1);
    //ListInsert(&L1, 0, 1);
    //ListInsert(&L1, 1, 2);
    //ListInsert(&L1, 2, 2);
    //ListInsert(&L1, 3, 2);
    //ListInsert(&L1, 4, 3);
    //ListInsert(&L1, 5, 3);
    //ListInsert(&L1, 6, 4);
    //ListInsert(&L1, 7, 5);
    //printf("L1: ");
    //PrintList(&L1);

    //InitList(&L2);
    //ListInsert(&L2, 0, 1);
    //ListInsert(&L2, 1, 2);
    //ListInsert(&L2, 2, 2);
    //ListInsert(&L2, 3, 2);
    //ListInsert(&L2, 4, 3);
    //ListInsert(&L2, 5, 3);
    //ListInsert(&L2, 6, 4);
    //ListInsert(&L2, 7, 5);
    //printf("L2: ");
    //PrintList(&L2);

    //printf("准备调用 LumpList...\n");
    //fflush(stdout);
    //SqList* L = LumpList(&L1, &L2);
    //printf("合并后: ");
    //printf("L->length = %d\n", L->length);
    //printf("L->data[0] = %d\n", L->data[0]);
    //printf("L->data[15] = %d\n", L->data[15]);
    //PrintList(L);

    //DestroyList(&L1);
    //DestroyList(&L2);
    //DestroyList(L);
     
    
    //第7题
    //SqList L;
    //InitList(&L);
    //// 前 m 个：a1, a2, a3
    //ListInsert(&L, 0, 1);
    //ListInsert(&L, 1, 2);
    //ListInsert(&L, 2, 3);
    //// 后 n 个：b1, b2, b3, b4
    //ListInsert(&L, 3, 4);
    //ListInsert(&L, 4, 5);
    //ListInsert(&L, 5, 6);
    //ListInsert(&L, 6, 7);
    //printf("交换前: ");
    //PrintList(&L);

    //ExList(&L, 3, 4);  // m=3, n=4
    //printf("交换后: ");
    //PrintList(&L);

    //DestroyList(&L);

    //第8题
    SqList L;
    InitList(&L);
    ListInsert(&L, 0, 1);
    ListInsert(&L, 1, 3);
    ListInsert(&L, 2, 5);
    ListInsert(&L, 3, 7);
    printf("原表: ");
    PrintList(&L);

    TwoDiv(&L, 4);  // 插入 4
    printf("插入 4 后: ");
    PrintList(&L);

    TwoDiv(&L, 5);  // 找到 5，与后继交换
    printf("交换 5 后: ");
    PrintList(&L);

    DestroyList(&L);

    return 0;
}