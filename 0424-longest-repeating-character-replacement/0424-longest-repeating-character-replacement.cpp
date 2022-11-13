class Solution {
public:
    int characterReplacement(string a, int k) {
        long long s[26]={},j=0,ans=1;
        for(int i=0;i<a.size();i++){
            s[a[i]-'A']++;
            if((i-j+1)-*max_element(s,s+26)>k)
                s[a[j++]-'A']--;
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};