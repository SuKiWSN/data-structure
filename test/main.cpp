#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

#include "lineform.h" //线性表
#include "SingleChainList.h" //单链表
#include "DoubleChainList.h"

void LineFormTest(){
    LineForm L;
    L.length = 0;
    int i = 1;
    int e[5] = {1, 2, 3, 4, 5};
    int x;
    for (;i<=5;i++){
        ListInsert(L, i, e[i-1]);
    }
    printList(L);
    ListDelete(L, 2, x);
    printList(L);
    cout<<LocateElem(L, 5)<<endl;
}

void SingleChainListTest(){
    LNode *L;
    int e = 3;
    List_HeadInsert(L);
    printSingleChainList(L);
    List_TailInsert(L);
    printSingleChainList(L);
    int p = LocateElem(L, e);
    cout<<p<<endl;
}

void DoubleChainListTest(){
    DNode *L = nullptr;
    L = InsertNode(L);
    printDoubleChainList(L);
}

typedef struct BiTNode{
    int data;
    struct BiTNode *lchild, *rchild;
}BiTNode, *BiTree;

void visit(BiTree T){
    cout<<T->data<<" ";
}

void PreOrder(BiTree T){
    visit(T);
    if(T->lchild)PreOrder(T->lchild);
    if(T->rchild)PreOrder(T->rchild);
}

void InOrder(BiTree T){
    if(T->lchild)InOrder(T->lchild);
    visit(T);
    if(T->rchild)InOrder(T->rchild);
}

void PostOrder(BiTree T){
    if(T->lchild)PostOrder(T->lchild);
    if(T->rchild)PostOrder(T->rchild);
    visit(T);
}

int main(){
/*
 测试
 */
//    LineFormTest();
//    SingleChainListTest();
//    DoubleChainListTest();
    
    BiTree T = (BiTree)malloc(sizeof(struct BiTNode));
    T->data = 1;
    T->lchild = (BiTree)malloc(sizeof(struct BiTNode));
    T->rchild = (BiTree)malloc(sizeof(struct BiTNode));
    T->lchild->data = 2;
    T->lchild->lchild = NULL;
    T->lchild->rchild = (BiTree)malloc(sizeof(struct BiTNode));
    T->lchild->rchild->data = 4;
    T->lchild->rchild->rchild = NULL;
    T->lchild->rchild->lchild = (BiTree)malloc(sizeof(struct BiTNode));
    T->lchild->rchild->lchild->data = 6;
    T->lchild->rchild->lchild->lchild = NULL;
    T->lchild->rchild->lchild->rchild = NULL;
    T->rchild->data = 3;
    T->rchild->lchild = NULL;
    T->rchild->rchild = (BiTree)malloc(sizeof(struct BiTNode));
    T->rchild->rchild->data = 5;
    T->rchild->rchild->rchild = NULL;
    T->rchild->rchild->lchild = NULL;
    
    PreOrder(T);
    cout<<endl;
    InOrder(T);
    cout<<endl;
    PostOrder(T);
    cout<<endl;
    
    return 0;
}
