// You are using GCC
#include<iostream>
using namespace std;
struct node{
    int data;
    struct node * addr;
};
void insertAtFront(struct node ** p, int val){
    struct node * newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->addr = NULL;
    if(p==NULL){
        *p = newnode;
    }
    else{
        newnode->addr = *p;
        *p = newnode;
    }
}
void display(struct node *p){
    while(p!=NULL){
        cout<<p->data<<endl;
        p = p->addr;
    }
}
int main(){
    struct node* ptr;
    int n;
    cin>>n;
    ptr->data = n;
    ptr->addr = NULL;
    while(n>0){
        cin>>n;
        if(n>0)
        insertAtFront(&ptr, n);
    }
    display(ptr);
}