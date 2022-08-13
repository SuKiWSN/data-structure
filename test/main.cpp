#include <iostream>
using namespace std;
#include <stdio.h>

#define MaxSize 50

typedef struct {
    int data[MaxSize];
    int length;
}SqlList;

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
//    cout<<L.length<<endl;
    L.length++;
    return true;
}

bool ListDelete(SqlList &L, int i, int e){
    return true;
}

int main(){
    SqlList L;
    L.length = 0;
    int i = 1;
    int e = 3;
    ListInsert(L, i, e);
    ListInsert(L, i+1, e+1);
    cout<<L.length<<endl<<L.data[0]<<endl<<L.data[1]<<endl;
    
    
    return 0;
}
