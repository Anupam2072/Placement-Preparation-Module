int count(vector<int> row,int mid)
{
    int l=0,r=row.size()-1;
    while(l<=r)
    {
        int m=l+(r-l)/2;
        if(row[m]<=mid)
        l=m+1;
        else
        r=m-1;
    }
    return l;
}
int median(vector<vector<int>> &matrix, int m, int n) {
   int l=0,r=0;
   for(int i=0;i<m;i++)
   {l=min(matrix[i][0],l);
    r=max(matrix[i][n-1],r);
   }
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        int cnt=0;
        for(int i=0;i<m;i++)
        cnt+=count(matrix[i],mid);
        if(cnt<=(m*n)/2)
        l=mid+1;
        else
        r=mid-1;
    }
    return l;
}