class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    static bool comp(Item i1,Item i2)
    {double k1=(double)i1.value/(double)i1.weight;
    double k2=(double)i2.value/(double)i2.weight;
    return k1>k2;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {double ans=0.0;
    sort(arr,arr+n,comp);
    int w=0;
    for(int i=0;i<n;i++)
    {int j=arr[i].weight;
    int k=arr[i].value;
        if(w+j<=W)
        {
            w+=j;
            ans+=k;
        }
        else
        {double l=(double)(W-w)/(double)j;
        ans+=l*k;
        break;
        }
    }
    return ans;
    }
        
};