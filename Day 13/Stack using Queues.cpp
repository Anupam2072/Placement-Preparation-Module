class MyStack {
public:
    queue<int> q1;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
        for(int i=0;i<q1.size()-1;i++)
        {
            q1.push(q1.front());
            q1.pop();
        }
    }
    
    int pop() {
        int x;
        if(!q1.empty())
        {
             x=q1.front();
            q1.pop();
        }
        return x;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        if(q1.empty())
            return true;
        return false;
    }
};