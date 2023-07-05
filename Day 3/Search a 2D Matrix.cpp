class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int low,high,mid;
        if(m==0 or n==0)
        return false;
       for(low=0,high=m-1;low<=high;)
       {
           mid=low+(high-low)/2;
           if(matrix[mid][0]<target)
           low=mid+1;
           else if(matrix[mid][0]>target)
           high=mid-1;
           else
           return true;
       }
       int r=high;
       if(r>=0)
       {for(low=0,high=n-1;low<=high;)
       {
           mid=low+(high-low)/2;
           if(matrix[r][mid]<target)
           low=mid+1;
           else if(matrix[r][mid]==target)
           return true;
           else
           high=mid-1;
       }
       }
       return false;
    }
};