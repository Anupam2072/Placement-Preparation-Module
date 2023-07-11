class Solution {
public:
    void combination(vector<int> &candidates,int target,vector<vector<int>> &ans,int ind,vector<int> &c)
    {   
        if(target==0)
        {ans.push_back(c);
        return;
        }
        if(ind==candidates.size())
        return;
        if(candidates[ind]<=target)
        {
            c.push_back(candidates[ind]);
            combination(candidates,target-candidates[ind],ans,ind,c);
            c.pop_back();
            combination(candidates,target,ans,ind+1,c);
        }
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> c;
        sort(candidates.begin(),candidates.end());
        combination(candidates,target,ans,0,c);
        return ans;
    }
};