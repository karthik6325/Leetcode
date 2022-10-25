class Solution {
public:
    int maxConsecutive(int b, int t, vector<int>& s) {
        sort(s.begin(),s.end());
        int ans=0,be=b;
        for(auto i:s){
            ans=max(ans,i-be);
            be=i+1;
        }
        ans=max(ans,t-s[s.size()-1]);
        return ans;
    }
};