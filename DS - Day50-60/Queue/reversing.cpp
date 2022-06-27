// You are using GCC
#include<iostream>
using namespace std;
struct node{
    struct node* next, *prev;
    int data;
};
void enqueue(struct node** p, int val){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;
    newnode->prev = *p;
    if(*p == NULL){
        *p = newnode;
    }
    else{
        struct node* temp = *p;
        while(temp->next != NULL){
            temp = temp->next;
        }
        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next = newnode;
    }
}
void display(struct node* p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}
void reverse(struct node*p){
    struct node*temp = p;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    while(temp->prev!=NULL){
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    cout<<temp->data;
    cout<<endl;
}
int main(){
    struct node* head = NULL;
    int n;
    cin>>n;
    while(n>0){
        enqueue(&head, n);
        cin>>n;
    }
    cout<<"Before reversing:"<<endl;
    display(head);
    cout<<"After reversing:"<<endl;
    reverse(head);
}