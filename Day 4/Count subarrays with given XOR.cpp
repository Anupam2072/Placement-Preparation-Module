#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    int n=arr.size();
    map<int,int> m;
    int ans=0,count=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];
        if(ans==x)
        count+=1;
        if(m.find(ans^x)!=m.end())
        count+=m[ans^x];
        m[ans]+=1;
    }
    return count;
}