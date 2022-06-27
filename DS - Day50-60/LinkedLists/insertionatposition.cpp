// You are using GCC
#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* addr;
};
void insertAtPosition(struct node** p, int val, int pos){
    struct node* newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->addr = NULL;
    struct node* temp = *p;
    for(int i=0; i<pos-1; i++){
        temp = temp->addr;
    }
    newnode->addr = temp->addr;
    temp->addr = newnode;
    
}
void insertAtEnd(struct node**p, int val){
    struct node * newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->addr = NULL;
    if(*p==NULL){
        *p = newnode;
    }
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
int main(){
    struct node * head = NULL;
    int n, addr, val;
    while (true){
        cin>>n;
        if(n>0) insertAtEnd(&head, n);
        else break;
    }
    display(head);
    cin>>addr>>val;
    insertAtPosition(&head, val, addr);
    display(head);
}