class Solution {
public:
    int solve(vector<int>&nums,int mid){
        int div=1;
        int sum=0;
        for(int i=0;i<nums.size();++i){
            if(sum+nums[i]>mid){
                sum=nums[i];
                div++;
            }else{
                sum+=nums[i];
            }
        }
        return div;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int s=*max_element(begin(weights),end(weights));
        int e=accumulate(begin(weights),end(weights),0);
        int ans=0;
        while(s<=e){
            int m=s+(e-s)/2;
            int x=solve(weights,m);
            if(x>days){
                s=m+1;
            }
            else {e=m-1;
                 ans=m;}
        }
        return ans;
    }
};