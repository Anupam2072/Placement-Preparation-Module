class Solution{
    public:
    void Path(vector<vector<int>> &m,int n,int di[],int dj[],string s,vector<string> &l,
    int i,int j,vector<vector<int>> &v)
    {
        if(i==n-1 && j==n-1)
        {
            l.push_back(s);
            return;
        }
        string d="DLRU";
        for(int ind=0;ind<4;ind++)
        {
            int dir1=i+di[ind];
            int dir2=j+dj[ind];
            if(dir1>=0 && dir2>=0 && dir1<n && dir2<n && !v[dir1][dir2] && m[dir1][dir2]==1)
            {
                v[dir1][dir2]=1;
                Path(m,n,di,dj,s+d[ind],l,dir1,dir2,v);
                v[dir1][dir2]=0;
            }
        }
    }
        vector<string> findPath(vector<vector<int>> &m,int n)
        {vector<vector<int>> v(n,vector<int>(n,0));
        int di[]={1,0,0,-1};
        int dj[]={0,-1,1,0};
        vector<string> l;
        v[0][0]=1;
        if(m[0][0]==1)
        Path(m,n,di,dj,"",l,0,0,v);
        return l;
    }
};

    
