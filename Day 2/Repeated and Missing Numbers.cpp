#include <bits/stdc++.h> 
#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{pair<int,int> a;
int r,m;
	for(int i=0;i<n;i++)
{
	int index=abs(arr[i])-1;
	arr[index]*=-1;
	if(arr[index]>0)
	{
		r=abs(arr[i]);
		arr[index]*=-1;
	}
}
for(int i=0;i<n;i++)
if(arr[i]>0)
m=i+1;
a=make_pair(m,r);
return a;

}