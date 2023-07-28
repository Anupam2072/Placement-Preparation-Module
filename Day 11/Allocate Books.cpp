#include <bits/stdc++.h> 
bool ispossible(long long mid,vector<int>& time,int n,int m)
{
	int count=1;
	long long s=0;
	for(int i=0;i<m;i++)
	{if(time[i]>mid)return false;
	if(count>n)return false;
		if(s+time[i]>mid)
		{
			count++;
			s=time[i];
		}
		else
		s+=time[i];
	}
	return count<=n;
}
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	long long l=0;
	long long r=0;
	for(int i=0;i<m;i++)
	{
		if(l<time[i])
		l=time[i];
		r+=time[i];
	}
	long long min;
	while(l<=r)
	{
		long long mid=(l+r)>>1;
		if(ispossible(mid,time,n,m))
		{
			min=mid;
			r=mid-1;
		}
		else
		l=mid+1;	
	}
	return min;
}