#ifndef SingleChainList_h
#define SingleChainList_h

#include <iostream>
using namespace std;
#include <stdio.h>

typedef struct LNode{
    int data;
    struct LNode *next;
}LNode, *LinkList;

//头插法建立单链表
LinkList List_HeadInsert(LinkList &L){
    LNode *s; int x;
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    scanf("%d", &x);
    while(x!=9999){
        s = (LNode*)malloc(sizeof(LNode));
        s->data = x;
        s->next = L->next;
        L->next = s;
        scanf("%d", &x);
    }
    return L;
}

//尾插法建立单链表
LinkList List_TailInsert(LinkList &L){
    int x;
    L = (LinkList)malloc(sizeof(LNode));
    LNode *s, *r=L;
    scanf("%d", &x);
    while (x!=9999) {
        s = (LNode *)malloc(sizeof(LNode));
        s->data = x;
        r->next = s;
        r = s;
        scanf("%d", &x);
    }
    r->next = NULL;
    return L;
}

LNode *GetElem(LinkList L, int i){
    int j = 1;
    LNode *p = L->next;
    if(i==0){
        return L;
    }
    if(i < 1){
        return NULL;
    }
    while(p&&j<i){
        p = p->next;
        j++;
    }
    return p;
}

int LocateElem(LinkList L, int e){
    LNode *p = L->next;
    int i = 1;
    while (p && p->data!=e){
        p = p->next;
        i += 1;
    }
    return i;
}

void printSingleChainList(LNode* L){
    LNode *l;
    l = L->next;
    while(l){
        cout<<l->data<<" ";
        l = l->next;
    }
    cout<<"\n";
}

#endif /* SingleChainList_h */
