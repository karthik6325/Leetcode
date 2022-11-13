class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long j=0,s=0,ans=1;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            if((i-j+1)*nums[i]-s>k)
                s-=nums[j++];
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};