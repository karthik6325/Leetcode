class Solution {
public:
    string getHint(string s, string g) {
        map<char,int>m;
        int b=0,c=0;
        for(int i=0;i<s.size();i++)
            m[s[i]]++;
        for(int i=0;i<s.size();i++){
            if(s[i]==g[i]&&m.find(g[i])!=m.end()&&m[g[i]]>0){
                b++;
                m[g[i]]--;
            }
        }
        for(int i=0;i<s.size();i++){
            if(s[i]!=g[i]&&m.find(g[i])!=m.end()&&m[g[i]]>0){
                m[g[i]]--;
                c++;
            }
        }
        return to_string(b)+"A"+to_string(c)+"B"; 
    }
};