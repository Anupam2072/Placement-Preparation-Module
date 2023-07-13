class Solution {
public:
    void solve(int n,vector<vector<string>>& ans,vector<string>& place,int col,vector<int>& left,vector<int>& upper,vector<int>& down)
    {if(col==n)
    {
        ans.push_back(place);
        return;
    }
      for(int row=0;row<n;row++)
      {if(left[row]==0&&upper[n-1+col-row]==0&&down[col+row]==0)
      {left[row]=1;
      upper[n-1+col-row]=1;
      down[row+col]=1;
      place[col]='Q';
      solve(n,ans,place,col+1,left,upper,down);
      left[row]=0;
      upper[n-1+col-row]=0;
      down[row+col]=0;
      place[col]='.';
      }
      }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> place(n);
        string s(n,'.')
        for(int i=0;i<n;i++)
        place[i]=s;
        vector<int> left(n,0),upper(2*n-1,0),down(2*n-1,0);
        solve(n,ans,place,0,left,upper,down);
        return ans;
    }
};