class Solution {
public:
    int minimumCost(vector<int>& c) {
        sort(c.begin(),c.end());
        int cnt=0,ans=0;
        for(int i=c.size()-1;i>=0;i--){
            cnt++;
            ans+=c[i];
            if(cnt!=0&&cnt%3==0){
                ans-=c[i];
                continue;
            }
        }
        return ans;
    }
};