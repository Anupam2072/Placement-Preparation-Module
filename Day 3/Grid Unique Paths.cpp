class Solution {
public:
    int uniquePaths(int m, int n) {
        int r=m-1;
        long long f=1;
        int N=m+n-2;
        for(int i=1;i<=r;i++)
            f=f*(N-r+i)/i;
        return f;
    }
};