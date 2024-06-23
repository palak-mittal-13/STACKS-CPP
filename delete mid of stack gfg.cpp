//gfg
/*
class Solution
{
    public:
    
    void middleOfStack(stack<int>&st,int &midPos){
    //base case
    if(midPos==1){
      st.pop();
       return;
    }
    
    midPos--;
    int temp=st.top();
    st.pop();
    //recursive case
    middleOfStack(st,midPos);
    //backtrack so that stack not get change
    st.push(temp);
}
    
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        int midPos;
        if(sizeOfStack%2==0){
        midPos=(sizeOfStack/2)+1;
    }else{
        midPos=(sizeOfStack/2)+1;
    }
    
    middleOfStack(s,midPos);
    
   
    }
    
    */