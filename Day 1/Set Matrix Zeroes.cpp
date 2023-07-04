//Day 1 Problem 1:Set Matrix Zeroes
/*Time: 15 ms(Beats 75.8%)
Memory: 13.3 MB(Beats 27.36%)
*/
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int i,j,c=1;
        int m=matrix.size();
        int n=matrix[0].size();
        for(i=0;i<m;i++)
        {
            if(matrix[i][0]==0)
            c=0;
            for(j=1;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(i=m-1;i>=0;i--)
        {
            for(j=n-1;j>=1;j--)
            {
                if(matrix[i][0]==0 or matrix[0][j]==0)
                matrix[i][j]=0;
            }
            if(c==0)
            matrix[i][0]=0;
        }
    }
};
