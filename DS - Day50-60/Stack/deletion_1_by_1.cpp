// You are using GCC
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    int n, val;
    cin>>n;
    int n1 = n;
    if(n==0){
        cout<<"Stack is empty";
    }
    else{
        for(int i=0; i<n; i++){
            cin>>val;
            s.push(val);
        }
        stack<int> temp=s;
        cout<<"Before pop starts:\n";
        
        cout<<"Stack elements are:\n";
        for(int i=0; i<n; i++){
            cout<<temp.top()<<" ";
            temp.pop();
        }
        cout<<endl;
        cout<<"Enter the number of values to be popped:\n";
        cin>>val;
        cout<<"After pop starts:\n";
        for(int i=0; i<val; i++){
            cout<<"pop number: "<<i+1<<endl;
            if(n>0){
                int value = s.top();
                cout<<"The popped element is "<<value<<endl;
                s.pop();
            }
            n-=1;
            if(n==-1){
                cout<<"Stack Underflow\n";
                break;
            }
            temp = s;
            if(!s.empty()){
                cout<<"Stack elements are:\n";
                for(int j=0; j<n; j++){
                    cout<<temp.top()<<" ";
                    temp.pop();
                }
                cout<<endl;
            }
            else{
                cout<<"Stack is empty"<<endl;
                
            }
        }
        
    }
    
}