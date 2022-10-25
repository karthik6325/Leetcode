class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) {
        string s,t;
        for(int i=0;i<w1.size();i++)
            s+=w1[i];
        for(int i=0;i<w2.size();i++)
            t+=w2[i];
        return s==t;
    }
};