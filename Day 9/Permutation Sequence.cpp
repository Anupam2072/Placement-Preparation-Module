class Solution {
public:
  string getPermutation(int n, int k) {
        vector<int> nums;
        int f=1;
        for(int i=1;i<n;i++)
        {   f*=i;
            nums.push_back(i);
        }
        nums.push_back(n);
        string x="";
        k=k-1;
        while(true)
        {
            x=x+to_string(nums[k/f]);
            nums.erase(nums.begin()+k/f);
            if(nums.size()==0)
            break;
            k=k%f;
            f=f/nums.size();
        }
        return x;
    }
};