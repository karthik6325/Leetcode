class Solution {
public:
    string reverseWords(string s) {
        vector<string>t;
        string ans,a;
        stringstream str(s);
        while(str>>a)
            t.push_back(a);
        for(int i=t.size()-1;i>=0;i--){
            if(i==0){
                ans=ans+t[i];
                break;
            }
            ans=ans+t[i]+" ";
        }
        return ans;
    }
};