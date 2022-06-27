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
    if(p==NULL){ *p = newnode; }
    else{ newnode->addr = *p; *p = newnode; }
} 
void display(struct node *p, int num){ 
    bool found = false;
    while(p!=NULL){ 
        if(p->data == num){
            found = true;
            break;
        }
        p = p->addr;
    }
    cout<<num<<(found?" is present":" is not present")<<" in the list";
} 
int main(){
    struct node* ptr; 
    int n; 
    cin>>n; 
    ptr->data = n; 
    ptr->addr = NULL;
    while(n>0){ 
        cin>>n; 
        if(n>0) insertAtFront(&ptr, n);
    } 
    cin>>n;
    display(ptr, n);
}