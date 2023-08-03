#include <bits/stdc++.h> 
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here.
    for(int i=1;i<k;i++)
    kArrays[0].insert(kArrays[0].end(),kArrays[i].begin(),kArrays[i].end());
    sort(kArrays[0].begin(),kArrays[0].end());
    return kArrays[0];
}