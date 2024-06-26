#include<iostream>
#include<stack>
using namespace std;

bool checkRedundant(string str){
  stack<char>st;
  for(int i=0;i<str.length();i++){
  char ch=str[i];

  if(ch=='('||ch=='+'||ch=='-'||ch=='*'||ch=='/'){
    st.push(ch);
  }

  else if(ch==')'){
      int operatorcount=0;
      while(!st.empty() && st.top()!='('){
         char temp=st.top();
        if(temp=='+'||temp=='-'||temp=='*'||temp=='/'){
          operatorcount++;
        }
        st.pop();
      }
      //yahan par tabhi pahuchenge jab mere stack ka top=='(' hoga
      st.pop();
      
      if(operatorcount==0){
        //mtlb two brakets ke beech me operator nahi tha
        return true;
      }
  }
}
// agar mai yahan tk pahucha hu toh iska mtlb har ek bracket ke beech me ek operator pkka mila hoga
  return false;
}


int main(){

string str="((a+b)*(c+d))";

bool ans=checkRedundant(str);
if(ans==true){
  cout<<"redundant brackets present"<<endl;
}else{
  cout<<"redundant brackets not present"<<endl;
}

string str1="(((a+b)*(c+d)))";
bool ans1=checkRedundant(str1);

if(ans1==true){
  cout<<"redundant brackets present"<<endl;
}else{
  cout<<"redundant brackets not present"<<endl;
}

  return 0;
}