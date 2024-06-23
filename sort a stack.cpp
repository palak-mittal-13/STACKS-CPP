#include <iostream>
#include<stack>
using namespace std;

void printStack(stack<int>st){
  while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
  }
  cout<<endl;
}

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

void sortStack(stack<int>&st){
   if(st.empty()) return;
   int temp=st.top();
   st.pop();
   sortStack(st);
   insertion(st,temp);
}

int main(){

stack<int>st;
st.push(10);
st.push(40);
st.push(23);
st.push(10);
st.push(5);

cout<<"before sort:"<<endl;
printStack(st);

sortStack(st);

cout<<"after sort:"<<endl;
printStack(st);

  return 0;
}






