class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> sub;
        part(s,ans,sub,0);
        return ans;
    }
    void part(string s,vector<vector<string>> &ans,vector<string> &sub,int index)
    {
        if(index==s.size())
        {
            ans.push_back(sub);
            return;
        }
        for(int i=index;i<s.size();i++)
        {
            if(ispalindrome(s,index,i))
            {sub.push_back(s.substr(index,i-index+1));
            part(s,ans,sub,i+1);
            sub.pop_back();
            }
        }
    }
    bool ispalindrome(string s,int start,int end)
    {
        while(start<end)
        {
            if(s[start++]!=s[end--])return false;
        }
        return true;
    }
};