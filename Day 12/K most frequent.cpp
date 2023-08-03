class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int> m;
       for(int i:nums)
       m[i]++;
       vector<int> ans;
       priority_queue<pair<int,int>> p;
       for(auto i=m.begin();i!=m.end();i++)
       {
           p.push(make_pair(i->second,i->first));
           if(p.size()>(m.size()-k))
           {
               ans.push_back(p.top().second);
               p.pop();
           }
       }
       return ans;
    }
};