#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

Node *start = NULL;

int findNLast(struct Node* head, int n)
{
  if(head == NULL){
    return -1;
  }
  	struct Node *p1 = head, *p2 = head;
	for(int i=0;i<n;i++){
      if(p2->next==NULL){
        p2 = head;
        break;
      }
      p2 = p2->next;
    }
  	while(p1->next && p2->next){
  	    cout << p1 << endl;
      p1 = p1->next;
      p2 = p2->next;
    }
  return p1->data;
}

Node *createNode(int n){
    Node *ptr = new Node;
    ptr->data = n;
    ptr->next = NULL;
    return ptr;
}

int main()
{
    int n,value;
    cin >> n;
    for(int i=0;i<n;i++){
        Node *ptr = start;
        cin >> value;
        if(ptr == NULL){
            start = createNode(value);
        }else{
            while(ptr->next!=NULL){
                ptr = ptr->next;
            }
            ptr->next = createNode(value);
        }
    }
    cout << findNLast(start,8);
    return 0;
}
