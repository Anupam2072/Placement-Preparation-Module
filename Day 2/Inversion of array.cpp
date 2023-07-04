#include <bits/stdc++.h> 
int merge(long long  *arr,int l,int mid,int r)
{   int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
    int inv_count=0;
    for(int i=0;i<n1;i++)
    a[i]=arr[l+i];
    for(int i=0;i<n2;i++)
    b[i]=arr[mid+1+i];
    int i=0,j=0,k=l;
    while(i<n1 and j<n2)
    {
        if(a[i]<=b[j])
        arr[k++]=a[i++];
        else {
          arr[k++] = b[j++];
          inv_count += mid-l+1-i;
        }
    }
    while(i<n1)
    arr[k++]=a[i++];
    while(j<n2)
    arr[k++]=b[j++];
    return inv_count;
}
int mergesort(long long *arr,int l,int r)
{int inv_count=0;
    if(l<r)
{
    int mid=l+(r-l)/2;
    inv_count+=mergesort(arr,l,mid);
    inv_count+=mergesort(arr,mid+1,r);
    inv_count+=merge(arr,l,mid,r);
}
return inv_count;
}
long long getInversions(long long *arr, int n){
    return mergesort(arr,0,n-1);
}