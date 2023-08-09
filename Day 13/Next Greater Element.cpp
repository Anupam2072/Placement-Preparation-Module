class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        vector<int> ans(nums1.size(),-1);
        stack<int> s;
        for(int num:nums2)
        {
            while(!s.empty() and s.top()<num)
            {m[s.top()]=num;
            s.pop();
            }
            s.push(num);
        }
        for(int i=0;i<nums1.size();i++)
        {
            if(m.find(nums1[i])!=m.end())
            ans[i]=m[nums1[i]];
        }
        return ans;
    }
};