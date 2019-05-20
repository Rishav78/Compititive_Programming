#include <iostream>

using namespace std;

struct node{
    int n;
    node *next;
};
node *start;

node *createNode(int n){
    node *ptr = new node;
    ptr->n = n;
    ptr->next = NULL;
    return ptr;
}

int main()
{
    int n,value;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> value;
        node *ptr = start;
        if(start==NULL){
            start = createNode(value);
        }else{
            while(ptr->next!=NULL){
                ptr = ptr->next;
            }
            ptr->next = createNode(value);
        }
    }
    node *first = start,*last = start;

    while(first!=NULL && last->next!=NULL){
        first = first->next;
        last = (last->next)->next;
    }
    cout << first->n;
    return 0;
}
