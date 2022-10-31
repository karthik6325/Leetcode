class Solution {
public:
    int destroyTargets(vector<int>& nums, int s) {
        map<int,int>m;
        int ans=1e9,mx=0,t=0;
        for (int i:nums)
            t=max(t,++m[i%s]);
        for(auto i:nums){
            if(m[i%s]==t)
                ans=min(ans,i);
        }
        return ans;
    }
};