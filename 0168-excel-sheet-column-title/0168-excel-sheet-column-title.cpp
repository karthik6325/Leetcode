class Solution {
public:
    string convertToTitle(int n) {
        string ans="";
        while(n>0){
            int t=(n-1)%26;
            n=(n-1)/26;
            ans=(char)(t+'A')+ans;
        }
        return ans;    
    }
};