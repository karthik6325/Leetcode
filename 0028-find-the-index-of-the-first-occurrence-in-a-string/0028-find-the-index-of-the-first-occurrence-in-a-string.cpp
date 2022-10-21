class Solution {
public:
    int strStr(string h, string n) {
        if(n.size()>h.size())
            return -1;
        string t=h.substr(0,n.size());
        for(int i=0;i<=h.size()-n.size();i++){
            if(t==n)
                return i;
            t.erase(t.begin());
            t.push_back(h[i+n.size()]);
        }
        return -1;
    }
};