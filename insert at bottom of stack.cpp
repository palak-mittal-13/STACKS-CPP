#include <iostream>
#include<stack>
using namespace std;

void insertionAtBottom(stack<int>&st,int element){
  if(st.empty()){
    st.push(element);
    cout<<st.top()<<endl;
    return;
  }
  int temp=st.top();
  st.pop();
  insertionAtBottom(st,element);
  st.push(temp);
  cout<<st.top()<<endl;
  
}

int main(){

int element=400;
stack<int>st;
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);

cout<<"size of stack before insertion of element:"<<st.size()<<endl;
insertionAtBottom(st,element);
cout<<"size of stack after insertion of element:"<<st.size()<<endl;

  return 0;
}