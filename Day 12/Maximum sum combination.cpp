vector<int> Solution::solve(vector<int> &A, vector<int> &B, int C) {
    priority_queue<pair<int,pair<int,int>>> h;
    vector<int> ans;
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int n=A.size();
    for(int i=0;i<n;i++)
    h.push({A[i]+B[n-1],{i,n-1}});
    while(!(h.empty())&&C--)
    {
        pair<int,pair<int,int>> p=h.top();
        int x=p.second.first;
        int y=p.second.second;
        ans.push_back(p.first);
        h.pop();
        if(y!=0)
        h.push({A[x]+A[y-1],{x,y-1}});
    }
    return ans;
}