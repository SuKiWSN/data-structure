#ifndef DoubleChainList_h
#define DoubleChainList_h

typedef struct DNode{
    int data;
    struct DNode *prior, *next;
}DNode, *DLinkList;

void printDoubleChainList(DNode* L){
    DNode *l;
    l = L->next;
    while(l){
        cout<<l->data<<" ";
        l = l->next;
    }
    cout<<"\n";
}

DLinkList InsertNode(DNode *L){
    L = (DLinkList)malloc(sizeof(DNode));
    L->next = NULL;
    L->prior = NULL;
    DNode *s;
    int x;
    scanf("%d", &x);
    while (x!=9999){
        s = (DNode*)malloc(sizeof(DNode));
        s->data = x;
        s->next = L->next;
        if (L->next != NULL){
            L->next->prior = s;
        }
        s->prior = L;
        L->next = s;
        scanf("%d", &x);
    }
    return L;
}

#endif /* DoubleChainList_h */
