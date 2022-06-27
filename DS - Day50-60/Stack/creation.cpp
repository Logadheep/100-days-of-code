// You are using GCC
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    int n, val;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>val;
        s.push(val);
    }
    cout<<"Stack elements are:\n";
    for(int i=0; i<n; i++){
        cout<<s.top()<<" ";
        s.pop();
    }
}