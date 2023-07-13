class Solution{
public:
    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
    bool isvalid(bool graph[101][101],int a[],int i,int j,int n)
    {
        for(int k=0;k<n;k++)
        {
            if(graph[i][k]==1&&a[k]==j)
            return false;
        }
        return true;
    }
    bool graphColor(bool graph[101][101],int a[],int m,int n,int i)
    {if(i==n)
    return true;
    for(int j=1;j<=m;j++)
    {if(isvalid(graph,a,i,j,n))
    {
        a[i]=j;
        if(graphColor(graph,a,m,n,i+1))
        return true;
        a[i]=0;
    }
    }
        return false;
    }
    bool graphColoring(bool graph[101][101], int m, int n) {
        // your code here
        int a[n]={0};
        return graphColor(graph,a,m,n,0);
    }
};