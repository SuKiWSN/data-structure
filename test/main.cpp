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

int main(){
    SqlList L;
    L.length = 0;
    int i = 1;
    int e[5] = {1, 2, 3, 4, 5};
    int x;
    for (;i<5;i++){
        ListInsert(L, i, e[i-1]);
    }
    
    cout<<L.length<<endl<<L.data[0]<<endl<<L.data[1]<<endl;
    ListDelete(L, 2, x);
    cout<<endl;
    cout<<L.length<<endl<<L.data[1]<<endl;
    
    return 0;
}
