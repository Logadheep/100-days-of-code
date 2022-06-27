// You are using GCC
#include<iostream>
using namespace std;
struct node{
    struct node* addr;
    int data;
};
void insertAtEnd(struct node** p, int val){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->addr = NULL;
    if(*p==NULL){
        *p = newnode;
    }
    else{
        struct node * temp = *p;
        while(temp->addr != NULL){
            temp= temp->addr;
        }
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
int main(){
    struct node * head = NULL;
    int n;cin>>n;
    while(n>0){
        insertAtEnd(&head, n);
        cin>>n;
    }
    display(head);
}