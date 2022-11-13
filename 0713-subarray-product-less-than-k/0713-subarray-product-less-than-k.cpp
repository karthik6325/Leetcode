class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        long long p=1,j=0,ans=0;
        for(int i=0;i<nums.size();i++){
            p*=nums[i];
            while(j<=i&&p>=k)
                p/=nums[j++];
            ans+=i-j+1;
        }
        return ans;
    }
};