class Solution {
public:
    string reverseVowels(string s) {
        int b=0,e=s.size()-1;
        while(b<e){ 
            while(b<e&&s[b]!='a'&&s[b]!='e'&&s[b]!='i'&&s[b]!='o'&&s[b]!='u'&&s[b]!='A'&&s[b]!='E'&&s[b]!='I'&&s[b]!='O'&&s[b]!='U')
                b++;
            while(b<e&&s[e]!='a'&&s[e]!='e'&&s[e]!='i'&&s[e]!='o'&&s[e]!='u'&&s[e]!='A'&&s[e]!='E'&&s[e]!='I'&&s[e]!='O'&&s[e]!='U')
                e--;
            if(b<e)
                swap(s[b],s[e]);
            b++;
            e--;
        }
        return s;
    }
};