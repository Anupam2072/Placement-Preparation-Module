int NthRoot(int n, int m) {
  int l=2,r=m-1;
  if(n==1 || m==1)
  return m;
  while(l<=r)
  {
    int mid=l+(r-l)/2;
    double k=pow(mid,n);
    if(k==m)
    return mid;
    else if(k>m)
    r=mid-1;
    else
    l=mid+1;
  }
  return -1;
}