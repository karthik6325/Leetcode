class Solution {
public:
    int rev(int n){
        int a=0;
        while(n>0){
            a=10*a+n%10;
            n/=10;
        }
        return a;
    }
    int countDistinctIntegers(vector<int>& nums) {
        set<int>ans;
        for(int i=0;i<nums.size();i++){
            int t=rev(nums[i]);
            ans.insert(nums[i]);
            ans.insert(t);
        }
        return ans.size();
    }
};