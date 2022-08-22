#include <iostream>
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

int main(){
/*
 测试
 */
//    LineFormTest();
//    SingleChainListTest();
    DoubleChainListTest();
    
    
    return 0;
}
