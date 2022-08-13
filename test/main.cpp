#include <iostream>
#include <stdio.h>
using namespace std;

#include "lineform.h" //线性表

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


int main(){
/*
 测试
 */
    LineFormTest();
    
    return 0;
}
