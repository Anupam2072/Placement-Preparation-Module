class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> a(numRows);
        for(int i=0;i<numRows;i++)
        {a[i].resize(i+1);
        a[i][0]=a[i][i]=1;
        for(int k=1;k<i;k++)
        a[i][k]=a[i-1][k-1]+a[i-1][k];
    }
    return a;
    }
};