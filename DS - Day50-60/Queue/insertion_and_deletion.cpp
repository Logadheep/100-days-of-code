// You are using GCC
#include<iostream> 
using namespace std; 
struct node{ struct node* addr; int data; };
void enqueue(struct node** p, int val){ 
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val; 
    newnode->addr = NULL;
    if(*p==NULL){ *p = newnode; } 
    else{
        struct node * temp = *p;
        while(temp->addr != NULL){ temp= temp->addr; }
        newnode->addr = temp->addr; 
        temp->addr = newnode; 
    }
}
void display(struct node * p){ 
    while(p!=NULL){
        cout<<p->data<<" ";
        p = p->addr;
    } 
} 
int dequeue(struct node** p){
    int val = (*p)->data;
    struct node*temp = *p;
    (*p) = (*p)->addr;
    free(temp);
    return val;
}
int main(){ 
    struct node * head = NULL; 
    int n, val, i=0;cin>>n; 
    while(i<n){ 
        cin>>val;
        enqueue(&head, val);
        i++;
    }
    cout<<dequeue(&head);
}