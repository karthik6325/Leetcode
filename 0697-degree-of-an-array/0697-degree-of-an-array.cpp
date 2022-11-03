class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int,int>m,b,e;
        int mx=1,ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(b.find(nums[i])==b.end())
                b[nums[i]]=i;
            else
                e[nums[i]]=i;
            m[nums[i]]++;
            if(mx<=m[nums[i]]){
                if(mx==m[nums[i]])
                    ans=min(ans,e[nums[i]]-b[nums[i]]+1);
                else
                    ans=e[nums[i]]-b[nums[i]]+1;
                mx=m[nums[i]];
            }
        }
        return ans<=0?1:ans;
    }
};