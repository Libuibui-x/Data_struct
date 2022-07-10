//seqList.c
#include"seqList.h"

//1.初始化操作
void Initlist(sqList*L)
{//创建一个空的顺序表
    L->data=(ElemType*)malloc(sizeof(ElemType)*INITSIZE);   //为顺序表分配初始空间，将空间基地址赋值给data
    L->length=0;                                            //初始长度为0（元素个数）
    L->listsize=INITSIZE;                                   //初始空间大小（能存入元素的数量）
    printf("顺序表创建成功！基地址：%o,表长：%d,表大小：%d\n",L->data,L->length,L->listsize);

}

//2.求表长操作
int Getlen(sqList*L)
{
    return (L->length);
}

//3.取元素操作
int Getelem(sqList*L,int i,ElemType*e)
{//取顺序表第i号元素，通过e返回
    if(i<1 || i>L->length)  return 0;   //超出范围参数返回0
    else
    {
        *e=L->data[i-1];
        return 1;
    }
}

//4.元素定位操作
int Locate(sqList *L,ElemType x)
{
    int i;
    for(i=0;i<L->length;i++)    //历遍寻找目标元素值
    {
        if(L->data[i] == x)
        {
            return i+1;         //找到目标返回位置
        }
    }
    return 0;                   //没找到，返回0
}
//5.插入操作
int Insert(sqList*L,int i,ElemType e)
{
    int j;
    if(i<1 || i>L->length)  return 0;   //插入位置错误
    if(L->length == L->listsize)        //当顺序表已满时，重新分配空间
    {
        L->data=(ElemType*)realloc(L->data,sizeof(ElemType)*((L->length)+1));
        L->listsize++;                  //顺序表大小+1
    }
    for(j=L->length;j>i-1;j--)          //将第i位及其之后的元素后移一个位
        L->data[j]=L->data[j-1];
    
    L->data[i-1]=e;
    L->length++;

    return 1;                           //插入成功，返回1
}

//6.删除操作
int Delete(sqList*L,int i,ElemType *e)
{
    int j;
    if(i<1 || i>L->length)  return 0;   //超出范围，参数不合理
    *e=L->data[i-1];
    for(j=i-1;j<L->length-1;j++)        //将目标值之后所有值前移一个位置。
        L->data[j]=L->data[j+1];    
    L->length--;                        //顺序表长度-1；
    return 1;                           //删除操作成功，返回1
}


//7.输出操作
void List(sqList*L)
{
    int i;
    for(i=0;i<L->length;i++)
        printf("-%d",L->data[i]);
    printf("\n");
}

//8.输入操作
void Input(sqList*L,int num)
{
    int i;
    for(i=0;i<num;i++)
    {
        L->data[i]=99-i;
        L->length++;
    }
        
}
