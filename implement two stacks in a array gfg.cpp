/*


class twoStacks
{   
     int* arr;
    int size;
    int top1, top2;
    
    public:
    
    //isme yeh hoga ki hum two top lenge and top1=-1 and top2=size of array and stack1 me elements front se push honge array ke aur stack 2 me back of array elements jab both topsnke beech ka difference 1 hoga tab overflow ki condition hogi
    
    twoStacks()
    {   
        size = 100; // Assuming the maximum size of the array
        arr = new int[size];
        top1 = -1;
        top2 = size; 
    }
    
    //Function to push an integer into the stack1.
    void push1(int x) {
         if(top2-top1==1) return;
        top1++;
        arr[top1]=x;
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
         if(top2-top1==1) return;
        top2--;
        arr[top2]=x;
    }

    // Function to remove an element from top of the stack1.
    int pop1() {
        if(top1==-1) return -1;
        int temp=arr[top1];
        top1--;
        return temp;
    }

    // Function to remove an element from top of the stack2.
    int pop2() {
       if(top2==size) return -1;
        int temp=arr[top2];
        top2++;
        return temp;
    }
};


*/