class Solution {
public:
    string minWindow(string s, string t) {
        int j=0,i=0,b=0,d=INT_MAX;
        map<char,int>m;
        for(int i=0;i<t.size();i++)
            m[t[i]]++;
        int c=t.size();
        while(i<s.size()){
            if(m[s[i]]>0)
                c--;
            m[s[i]]--;
            i++;
            while(c==0){
                if(i-j<d){
                    d=i-j;
                    b=j;
                }
                if(m[s[j]]==0)
                    c++;
                m[s[j]]++;
                j++;
            }
        }
        if(d==INT_MAX)
            return "";
        else
            return s.substr(b,d);
    }
};