//main.c
#include"seqList.h"

int main()
{
    int i;
    int j;
    sqList L;
    Initlist(&L);                               //顺序表初始化
    printf("顺序表长：%d \n",Getlen(&L));        //获取顺序表长
    Input(&L,10);                               //顺序表赋初值
    List(&L);                                   //输出顺序表
    printf("插入操作:%d\n",Insert(&L,4,25));     //顺序表插值
    printf("顺序表长：%d \n",Getlen(&L));        //获取顺序表长
    List(&L);
    Getelem(&L,3,&j);
    printf("顺序表第3个元素为：%d\n",j);
    printf("98是顺序表内第%d号元素\n",Locate(&L,98));
    List(&L);
    Delete(&L,3,&j);
    printf("顺序表长：%d \n",Getlen(&L));       //获取顺序表长
    List(&L);

    printf("程序执行完成！");

}