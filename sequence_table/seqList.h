//seqList.h
#ifndef _SEQLIST_H
#define _SEQLIST_H

#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;   //定义ElemType为int类型
#define INITSIZE 10     //顺序表存储空间初始分配值
//顺序表结构体定义
typedef struct 
{
    ElemType *data;     //存储空间基地址
    int length;         //顺序表长度（即已存入的元素个数）
    int listsize;       //当前存储空间容量（即能存入的元素个数）

}sqList;

//操作
//1.初始化操作
void Initlist(sqList *L);
//2.求表长操作
int Getlen(sqList *L);
//3.取元素操作
int Getelem(sqList *L,int i,ElemType *e);
//4.元素定位操作
int Locate(sqList *L,ElemType x);
//5.插入操作
int Insert(sqList*L,int i,ElemType x);
//6.删除操作
int Delete(sqList*L,int i,ElemType *e);
//7.输出操作
void List(sqList*L);
//8.输入操作
void Input(sqList*L,int num);

#endif