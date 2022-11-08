class Solution {
public:
    string makeGood(string s) {
        int t=s.size()-1;
        for(int i=0;i<t;i++){
            if(i<0)
                i=0;
            if(s[i]-'a'==s[i+1]-'A'||s[i]-'A'==s[i+1]-'a'){
                s.erase(i,2);
                i-=2;
            }
            t=s.size()-1;
        }
        return s;
    }
};