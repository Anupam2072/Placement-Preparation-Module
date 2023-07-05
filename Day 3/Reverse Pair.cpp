class Solution {
public:
    int merge(vector<int>& a,int l,int mid,int r)
    {int count=0;
        int n1=mid-l+1;
        int i,j,k;
        int n2=r-mid;
        int b[n1],d[n2];
       for(i=0;i<n1;i++)
       b[i]=a[l+i];
       for(j=0;j<n2;j++)
       d[j]=a[mid+1+j];
       j=mid+1;
       for(i=l;i<=mid;i++)
       {
           while(j<=r and a[i]>2LL*a[j])
           j++;
           count+=j-(mid+1);
       }
       i=0,j=0,k=l;
       while(i<n1 and j<n2)
       {
           if(b[i]<=d[j])
           a[k++]=b[i++];
           else
           a[k++]=d[j++];
       }
       while(i<n1)
       a[k++]=b[i++];
       while(j<n2)
       a[k++]=d[j++];
       return count;
    }
        int mergesort(vector<int>& a,int l,int r)
        {int c=0;
            if(l<r)
            {int mid=l+(r-l)/2;
            c+=mergesort(a,l,mid);
            c+=mergesort(a,mid+1,r);
            c+=merge(a,l,mid,r);
            }
        return c;
    }
    int reversePairs(vector<int>& nums) {
        return mergesort(nums,0,nums.size()-1);
    }
};