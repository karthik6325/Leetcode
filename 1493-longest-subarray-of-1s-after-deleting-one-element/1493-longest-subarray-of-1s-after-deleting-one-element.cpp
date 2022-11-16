class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int c1=0,c2=0,k=0,ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]&&k==0)
                c1++;
            if(c2==0&&nums[i]==0&&k==0){
                k=1;
                continue;
            }
            if(nums[i]&&k==1)
                c2++;
            if(nums[i]==0&&k==1){
                    ans=max({ans,c1+c2});
                    c1=c2;
                    c2=0;
            }
        }
        if(c1>0||c2>0){
            if(k==1)
            ans=max(ans,c1+c2);
        if(k==0)
            ans=max({ans,c2-1,c1-1});
    }
        return ans;
    }
};