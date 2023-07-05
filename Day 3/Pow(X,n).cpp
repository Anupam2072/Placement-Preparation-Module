#include <bits/stdc++.h>
int modularExponentiation(long long x, int n, long long m) {
	// Write your code here.
	int ans=1;
	while(n>0)
	{
		if(n&1)
		ans=(1LL*ans*x)%m;
		x=(1LL*x*x)%m;
		n=n>>1;
	}
	return (int)ans;
}