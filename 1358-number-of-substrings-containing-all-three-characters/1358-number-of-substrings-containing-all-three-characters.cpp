class Solution {
public:
    int numberOfSubstrings(string s) {
        map<char,int>m;
        int k=0,ans=0,n=s.size();
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
            while(m.size()==3){
                ans+=n-i;
                m[s[k]]--;
                if(m[s[k]]==0)
                    m.erase(s[k]);
                k++;
            }
        }
        return ans;
    }
};