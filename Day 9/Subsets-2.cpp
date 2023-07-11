class Solution {
public:
    void subset(vector<vector<int>> &ans,vector<int> &nums,vector<int> &sub,int ind)
    {   ans.push_back(sub);
        for(int i=ind;i<nums.size();i++)
        {if(i!=ind && nums[i]==nums[i-1])continue;
        sub.push_back(nums[i]);
        subset(ans,nums,sub,i+1);
        sub.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums){
        int n=nums.size();
        vector<int> sub;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        subset(ans,nums,sub,0);
        return ans;
    }
};