class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> a;
        for(auto i:nums)
        {
            a.insert(i);
        }
        nums.clear();
        for(auto i:a)
        {
            nums.push_back(i);
        }
        return nums.size();
    }
};