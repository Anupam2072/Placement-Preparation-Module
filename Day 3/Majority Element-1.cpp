class Solution {
public:
    int majorityElement(vector<int>& nums) {
       srand(unsigned(time(NULL)));
       int n=nums.size();
       int counter,c;
       while(true)
       {counter=0;
        c=nums[rand()%n];
           for(int num:nums)
           {
               if(c==num)
               counter++;
           }
           if(counter>n/2)
           return c;
       }
    }
};