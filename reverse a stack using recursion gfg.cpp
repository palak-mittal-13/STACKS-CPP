//approach1(basic approach with space complexity of O(n)): ek aur stack lo aur isme phle stack ke elements push karwa do and dusra wala stack return kara do

//approach2(with space complexity O(1) and time complexity O(n^2)): by recursion isme jo top wala element hai use bottom mei insert karo aur recursion se phle stack reverse karo 
#include <iostream>
#include<stack>
using namespace std;
class Solution{
public:
    void Reverse(stack<int> &st){
        if(st.empty()){
            return;
        }
        int element=st.top();
        st.pop();
        Reverse(st);
        insertionAtBottom(st,element);
    }
    
    
    void insertionAtBottom(stack<int>&st,int element){
      if(st.empty()){
        st.push(element);
        return;
      }
      int temp=st.top();
      st.pop();
      insertionAtBottom(st,element);
      st.push(temp);
}
};