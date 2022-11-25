class Solution {
public:
    bool checkIfPangram(string s) {
        if(s.size()<26)
            return false;
        map<char,int>m;
        for(int i=0;i<s.size();i++)
            m[s[i]]++;
        if(m.size()==26)
            return true;
        else
            return false;
    }
};