class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, long long int target) {
         int n=nums.size(),left,right;
         vector<vector<int>> ans;
         if(n<4)return ans;
         sort(nums.begin(),nums.end());
         for(int i=0;i<n-3;i++)
         {
             for(int j=i+1;j<n-2;j++)
             {
                 long long int t=target-nums[i]-nums[j];
                 left=j+1,right=n-1;
                 while(left<right)
                 {
                     if(nums[left]+nums[right]<t)left++;
                     else if(nums[left]+nums[right]>t)right--;
                     else 
                     {vector<int> quad;
                     quad.push_back(nums[i]);
                     quad.push_back(nums[j]);
                     quad.push_back(nums[left]);
                     quad.push_back(nums[right]);
                     ans.push_back(quad);
                     while(left<right and nums[left]==quad[2])left++;
                     while(left<right and nums[right]==quad[3])right--;
                     }
                 }
                 while(j+1<(n-2) and nums[j+1]==nums[j])j++;
             }
             while(i+1<(n-3) and nums[i+1]==nums[i])i++;
        }  
        return ans; 
    }
};