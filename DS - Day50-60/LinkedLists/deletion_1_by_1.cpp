// You are using GCC
#include<iostream> 
using namespace std; 
struct node{ int data; struct node* addr; }; 
void insertAtEnd(struct node**p, int val){ 
    struct node * newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->addr = NULL; 
    if(*p==NULL){ *p = newnode; } 
    else{ 
        struct node* temp = *p;
        while(temp->addr!=NULL){ 
            temp = temp->addr; 
        }
        temp->addr = newnode;
    } 
} 
void display(struct node*p){ 
    while(p!=NULL){ 
        cout<<p->data<<endl; 
        p = p->addr; 
    } 
} 
void deleteAtFront(struct node**p){
    struct node* temp = *p;
    *p = temp->addr;
    free(temp);
}
int main(){
    struct node * head = NULL;
    int n, addr, val, c=0; 
    while (true){ 
        cin>>n; 
        if(n>0){ 
            insertAtEnd(&head, n);
            c++;
        }
        else break;
    }
    display(head);
    for(int i=0; i<c;i++){
        cout<<"After "<<i+1<<" deletion:\n";
        deleteAtFront(&head); 
        display(head);
    }
    cout<<"No value to delete";
}