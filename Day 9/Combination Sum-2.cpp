class Solution {
public:
    void combination(vector<vector<int>> &ans,vector<int> &candidates,vector<int>& ds,int target,int ind)
    {   if(target==0)
        {
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<candidates.size();i++)
        {if(i>ind && candidates[i]==candidates[i-1])
        continue;
        if(candidates[i]>target)break;
        ds.push_back(candidates[i]);
        combination(ans,candidates,ds,target-candidates[i],i+1);
        ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(),candidates.end());
        combination(ans,candidates,ds,target,0);
        return ans;
    }
};