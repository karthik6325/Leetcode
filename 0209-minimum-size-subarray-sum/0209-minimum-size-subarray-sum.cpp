class Solution {
public:
    int minSubArrayLen(int t, vector<int>& nums) {
        int b=0,e=nums.size()-1,s=0,n=nums.size(),ans=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]>=t)
                return 1;
            s+=nums[i];
            if(s>=t)
                ans=min(ans,i-b+1);
            while(b<i&&t<=s){
                s-=nums[b++];
                if(t>=s){
                    ans=min(ans,i-b+2);
                }
            }
        }
        return ans==INT_MAX?0:ans;
    }
};