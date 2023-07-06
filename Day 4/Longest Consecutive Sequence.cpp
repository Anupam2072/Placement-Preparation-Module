class Solution {
private: 
    bool longestConsecutive(vector<int>& nums, int target){
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] == target){
                return true;
            }
        }
        return false;
    }
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int longestConsecutiveSequence = 0;
        for(auto num : nums){
            int currentNumber = num;
            int currentConsecutiveSequence = 1;
            while(longestConsecutive(nums, currentNumber+1)){
                currentNumber += 1;
                currentConsecutiveSequence += 1;
            }
            longestConsecutiveSequence = max(longestConsecutiveSequence, currentConsecutiveSequence);
        }
        return longestConsecutiveSequence;
    }
};