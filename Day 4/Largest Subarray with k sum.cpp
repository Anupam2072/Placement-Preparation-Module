#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector<int> arr) {
  int n=arr.size();
  if(n==0)
  return 0;
  unordered_map<int,int> m;
  int maxi=0;
  int sum=0;
  for(int i=0;i<n;i++)
  {sum+=arr[i];
  if(sum==0)
  maxi=i+1;
    if(m.find(sum)!=m.end())
    maxi=max(maxi,i-m[sum]);
    if(m.find(sum)==m.end())
    m[sum]=i;
  }
return maxi;
}