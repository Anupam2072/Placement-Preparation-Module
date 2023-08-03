class MedianFinder {
public:
priority_queue<int> max;
priority_queue<int,vector<int>,greater<int>> min;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(max.empty() or max.top()>num)
        max.push(num);
        else
        min.push(num);
        if(max.size()>min.size()+1)
        {
            min.push(max.top());
            max.pop();
        }
        else if(min.size()>max.size()+1)
        {
            max.push(min.top());
            min.pop();
        }
    }
    
    double findMedian() {
       if(max.size()==min.size())
       {
           if(max.empty())
           return 0.0;
           else
           return (max.top()+min.top())/2.0;
       }
        else
            return max.size()>min.size()?max.top():min.top();
    }
};