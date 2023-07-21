bool ispossible(vector<int> &stalls,int k,int mid)
{int n=stalls.size();
    int lp=stalls[0];
 int c=1,i;
 for(i=1;i<n;i++)
 {
     if((stalls[i]-lp)>=mid)
     {
         c++;
         if(c==k)
             return true;
         lp=stalls[i];
     }
 }
 return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{sort(stalls.begin(),stalls.end());
    int l=0,maxi=-1,ans=-1,i,mid;
    int n=stalls.size();
    for(i=0;i<n;i++)
    maxi=max(maxi,stalls[i]);
 while(l<=maxi)
 {mid=l+(maxi-l)/2;
     if(ispossible(stalls,k,mid))
     {ans=mid;
         l=mid+1;
     }
     else
         maxi=mid-1;
 }
 return ans;
}