class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    return maxsubarray(nums,0,nums.size()-1); 
    }
private:
    int maxsubarray(vector<int>& nums,int l,int r)
    {if(l>r)
    return INT_MIN;
    int m=l+(r-l)/2;
        int lmax=0,rmax=0,ml=0,mr=0;
        lmax=maxsubarray(nums,l,m-1);
        rmax=maxsubarray(nums,m+1,r);
        int sum=0;
        for(int i=m-1;i>=l;i--)
        {
            sum+=nums[i];
            ml=max(sum,ml);
        }
        sum=0;
        for(int i=m+1;i<=r;i++)
        {
            sum+=nums[i];
            mr=max(sum,mr);
        }
        return max(max(lmax,rmax),ml+mr+nums[m]);
    }
};