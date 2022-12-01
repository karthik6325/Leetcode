class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size(),c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(i<n/2&&(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'))
                c1++;
            else if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                c2++;
            
        }
        return c1==c2;
    }
};