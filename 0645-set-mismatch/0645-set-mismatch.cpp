class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int ans1,ans2;
        vector<int>a(n+2,0);
        for(int i=0;i<n;i++){
            a[nums[i]]++;
            if(a[nums[i]]>1){
                ans1=nums[i];
            }
        }
        for(int i=1;i<=n;i++){
            if(a[i]==0){
                ans2=i;
                break;
            }
        }
        return {ans1,ans2};
    }
};