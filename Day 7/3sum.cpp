class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int low,high;
        for(int i=0;i<n-2;i++)
        {
            low=i+1;
            high=n-1;
            while(low<high)
            {
                if(nums[i]+nums[low]+nums[high]==0)
                {ans.push_back({nums[i],nums[low],nums[high]});
                int temp1=nums[low],temp2=nums[high];
                while(low<high && nums[low]==temp1)
                low++;
                while(low<high && nums[high]==temp2)
                high--;
                }
                else if(nums[i]+nums[low]+nums[high]<0)
                low++;
                else
                high--;
            }
            while(i+1<n && nums[i]==nums[i+1])
                i++;

        }
        return ans;
    }
};