#include <bits/stdc++.h> 
vector<int> minHeap(int n, vector<vector<int>>& q) {
    // Write your code here.
    vector<int> h;
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        if(q[i][0]==0)
        {h.push_back(q[i][1]);
         int i=h.size()-1;
         while (i > 0 && h[(i - 1) / 2] > h[i]) {
           swap(h[(i - 1) / 2], h[i]);
           i = (i - 1) / 2;
         }
        }
        else
        {   ans.push_back(h[0]);
            h[0]=h[h.size()-1];
            h.pop_back();
            int index=0;
            while (true) {
        int left_child = 2 * index + 1;
        int right_child = 2 * index + 2;
        int smallest = index;
        if (left_child < h.size()
            && h[left_child] < h[smallest]) {
            smallest = left_child;
        }
        if (right_child < h.size()
            && h[right_child] < h[smallest]) {
            smallest = right_child;
        }
        if (smallest != index) {
            swap(h[index], h[smallest]);
            index = smallest;
        }
        else {
            break;
        }
    }
         }
        }
    return ans;    
}