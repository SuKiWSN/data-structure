#ifndef lineform_h
#define lineform_h

#include <iostream>
using namespace std;
#include <stdio.h>

#define MaxSize 50

//线性表结构体
typedef struct {
    int data[MaxSize];
    int length;
}LineForm;

//线性表插入
bool ListInsert(LineForm &L, int i, int e){
    if (i<1 || i>L.length+1){
        return false;
    }
    if (L.length>=MaxSize){
        return false;
    }
    for (int j=L.length;j>=i;j--){
        L.data[j] = L.data[j-1];
    }
    L.data[i-1] = e;
    L.length++;
    return true;
}

//线性表删除
bool ListDelete(LineForm &L, int i, int &e){
    if (i<1 || i>L.length){
        return false;
    }
    e = L.data[i-1];
    for (int j=i;j<L.length;j++){
        L.data[j-1] = L.data[j];
    }
    L.length--;
    return true;
}
int LocateElem(LineForm L, int e){
    int i;
    for (i=0;i<L.length;i++){
        if (L.data[i] == e){
            return i+1;
        }
    }
    return 0;  //没找到，返回0
}

//线性表按值查找
void printList(LineForm L){
    for (int j=0;j<L.length;j++){
        cout<<L.data[j]<<' ';
    }
    cout<<endl;
}

#endif /* lineform_h */
