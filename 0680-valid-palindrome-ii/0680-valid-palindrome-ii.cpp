class Solution {
public:
    bool check(string s){
        int n=s.size();
        int b=0,e=n-1;
        while(b<=e){
            if(s[b]!=s[e])
                return false;
            b++;
            e--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int b=0,e=s.size()-1,f=0;
        if(check(s))
            return true;
        while(b<=e){
            if(s[b]!=s[e]){
                string t1=s,t2=s;
                t1.erase(b,1);
               // cout<<check(t1)<<" ";
                if(check(t1))
                    return true;
                t2.erase(e,1);
               // cout<<t2;
                if(check(t2))
                    return true;
                return false;
            }
            b++;
            e--;
        }
        return true;
    }
};