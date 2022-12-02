class Solution {
public:
    bool closeStrings(string w1, string w2) {
        if(w1.size()!=w2.size())
            return false;
        unordered_map<char,int>m,n;
        vector<int>a,b;
        for(auto i:w1)
            m[i]++;
        for(auto i:w2)
            n[i]++;
        for(auto i:m){
            if(n.find(i.first)==n.end())
                return false;
            a.push_back(i.second);
        }
        for(auto i:n){
            if(m.find(i.first)==m.end())
                return false;
            b.push_back(i.second);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        return a==b;
    }
};