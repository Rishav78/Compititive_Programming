#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

Node *start;

Node *createNode(int n){
    Node *ptr = new Node;
    ptr->data = n;
    ptr->next = NULL;
    return ptr;
}

int  loopInList(struct Node* head)
{
  	int count=0;
	struct Node *p1 = head, *p2 = head;
  	while(p1!=NULL && p2->next!=NULL){
      p1 = p1->next;
      p2 = (p2->next)->next;
      if(p1==p2){
        break;
      }
    }
  	if(p1 == p2){
      p1 = head;
      while(p1!=p2){
        p1 = p1->next;
        p2 = p2->next;
      }
      count=1;
      p1 = p1->next;
      while(p1!=p2){
        p1 = p1->next;
        count++;
      }
    }
  return count;
}

int main()
{
    int n,value,n1,n2;
    cin >> n >> n1 >> n2;
    Node *p1,*p2;
    for(int i=0;i<n;i++){
        cin >> value;
        Node *ptr = start;
        if(start == NULL){
            ptr = createNode(value);
            start = ptr;
        }else{
            while(ptr->next != NULL){
                ptr = ptr->next;
            }
            ptr->next = createNode(value);
        }
        if(i+1==n1){
            p1 = ptr;
        }else{
            if(i+1==n2){
                p2 = ptr;
            }
        }
    }
    p2->next = p1;
    cout << loopInList(start);
    return 0;
}
