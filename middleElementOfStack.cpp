#include <iostream>
#include<stack>
using namespace std;

/*  approach1 without using recursion

int middleOfStack(stack<int>st){
    int middleElement,midPos;
    int size=st.size();
    
    if(size%2==0){
        midPos=(size/2);
    }else{
        midPos=(size/2)+1;
    }
    
    while(midPos!=1){
        midPos--;
        st.pop();
    }
    middleElement=st.top();
    return middleElement;
}

int main() {
    int str[6]={1,2,3,4,5,6};
    int size=6;
    stack<int>st;
    for(int i=0;i<size;i++){
        st.push(str[i]);
    }
    
    cout<<middleOfStack(st);
    
    return 0;
}

*/

/*   approach2 by using recursion

void middleOfStack(stack<int>&st,int &midPos,int &ans){
    //base case
    if(midPos==1){
       ans= st.top();
       return;
    }
    
    midPos--;
    int temp=st.top();
    st.pop();
    //recursive case
    middleOfStack(st,midPos,ans);
    //backtrack so that stack not get change
    st.push(temp);
}

int main() {
    
    stack<int>st;
        st.push(10);
        st.push(20);
        st.push(30);
        st.push(40);
        st.push(50);
       // st.push(60);
        
     int midPos,size=st.size();
    if(size%2==0){
        midPos=(size/2);
    }else{
        midPos=(size/2)+1;
    }
    int ans=-1;
    middleOfStack(st,midPos,ans);
    cout<<ans;
    
    return 0;
}



*/