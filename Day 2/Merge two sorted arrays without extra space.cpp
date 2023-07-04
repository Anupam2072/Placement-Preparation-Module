class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m==0)
        copy(nums2.begin(),nums2.end(),nums1.begin()); 
        while(n)
        {if(m>0 and nums1[m-1]>nums2[n-1])
             nums1[m+n]=nums1[--m];  
             else
            nums1[m+n]=nums2[--n];

        }
 }
};