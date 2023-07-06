class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s=="")
        return 0;
        int n=s.length();
        map<char,int> m;
        int left=0,right=0,max_count=0;
        while(right<n)
        {
            if(m.find(s[right])!=m.end())
            left=max(m[s[right]]+1,left);
            max_count=max(right-left+1,max_count);
            m[s[right]]=right;
            right++;
        }
        return max_count;
    }
};