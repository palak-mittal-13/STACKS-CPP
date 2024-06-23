#include <iostream>
#include<stack>
using namespace std;

void insertion(stack<int>&st,int element){
  //base case
  if( st.empty() || element>st.top()){
    st.push(element);
    return;
  }
  int temp=st.top();
  st.pop();
  //recursion
  insertion(st,element);
  //backtrack
  st.push(temp);
}

void printStack(stack<int>st){
  while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
  }
  cout<<endl;
}

int main(){

int element=35;
stack<int>st;
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);
printStack(st);
cout<<st.size()<<endl;
insertion(st,element);
printStack(st);
cout<<st.size()<<endl;
  return 0;
}









