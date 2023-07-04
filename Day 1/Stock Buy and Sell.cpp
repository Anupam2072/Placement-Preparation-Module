class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int k=prices[0],j,diff;
        int n=prices.size();
        int maxi=0;
        for(j=1;j<n;j++)
        {
            diff=prices[j]-k;
            if(diff<0)
            k=prices[j];
            maxi=max(maxi,diff);
        }
        return maxi;
    }
};