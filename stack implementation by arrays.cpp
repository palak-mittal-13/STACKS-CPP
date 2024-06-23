#include <iostream>
using namespace std;

class Stack{
public:
  int *arr;
  int top;
  int size;
  Stack(int size){
      this->top=-1;
      this->size=size;
  }
  
  void push(int data){
      if(top==size-1){
          cout<<"stack overflow"<<endl;
      }else{
          top++;
          arr[top]=data;
      }
  }
  
  void pop(){
      if(top==-1){
          cout<<"stack underflow"<<endl;
      }else{
          top--;
      }
  }
  
  bool isEmpty(){
      if(top==-1) return true;
      return false;
  }
  
  int getSize(){
      return top+1;
  }
  
  int getTop(){
      if(top==-1) {cout<<"empty stack"<<endl; return -1;
      }
      return arr[top];
  }
  
};

int main() {
    Stack st(5);
    st.pop();
    st.push(35);
    cout<<st.getTop()<<endl;
    cout<<st.isEmpty()<<endl;
    cout<<st.getSize()<<endl;

    return 0;
}