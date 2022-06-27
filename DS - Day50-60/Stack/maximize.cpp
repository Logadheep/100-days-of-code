// You are using GCC
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s, temp;
    int n;
    cin>>n;
    while(n>0){
        s.push(n);
        cin>>n;
    }
    temp = s;
    cout<<"Before maximizing:\n";
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;
    temp=s;
    stack<int>s1;
    int first = s.top(), second;
    while(!temp.empty()){
        second=first;
        temp.pop();
        first = temp.top();
        if(first>second){s1.push(first);}
        else{s1.push(second);}
    }
    temp = s1;
    cout<<"After maximizing:\n";
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;
}