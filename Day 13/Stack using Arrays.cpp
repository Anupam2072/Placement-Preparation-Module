class Stack {
    
public:
    int n;
    int index;
    int *arr;
    Stack(int capacity) {
    n=capacity;
    arr=new int[capacity];
    index=-1;
    }

    void push(int num) {
        // Write your code here.
    if (index != n - 1) 
      arr[++index] = num;
    }

    int pop() {
        // Write your code here.
        if(index==-1)
        return -1;
        else
        return arr[index--]; 
    }
    
    int top() {
        // Write your code here.
          if(index==-1)
        return -1;
        else
        return arr[index]; 
    }
    
    int isEmpty() {
        // Write your code here.
        if(index==-1)
        return 1;
        else
        return 0;
    }
    
    int isFull() {
        // Write your code here.
        if(index==n-1)
        return 1;
        else
        return 0;
    }
    
};
