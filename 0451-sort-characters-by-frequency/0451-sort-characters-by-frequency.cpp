class Solution {
public:
    string frequencySort(string s) {
        map<int,int>m;
        vector<string>b(s.size()+1);
        string ans;
        for(auto i:s)
            m[i]++;
        for(auto i:m){
            int t=i.second;
            while(t--)
                b[i.second].push_back(i.first);
        }
        for(int i=s.size();i>=0;i--){
            if(!b[i].empty())
                ans+=b[i];
        }
        return ans;
    }
};