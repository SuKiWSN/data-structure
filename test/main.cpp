#include <iostream>
using namespace std;
#include <stdio.h>

#define MaxSize 50

//线性表结构体
typedef struct {
    int data[MaxSize];
    int length;
}SqlList;

//线性表插入
bool ListInsert(SqlList &L, int i, int e){
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
bool ListDelete(SqlList &L, int i, int &e){
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
int LocateElem(SqlList L, int e){
    int i;
    for (i=0;i<L.length;i++){
        if (L.data[i] == e){
            return i+1;
        }
    }
    return 0;  //没找到，返回0
}

void printList(SqlList L){
    for (int j=0;j<L.length;j++){
        cout<<L.data[j]<<' ';
    }
    cout<<endl;
}

int main(){
    SqlList L;
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
    
    return 0;
}
