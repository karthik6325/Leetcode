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
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            int t=rev(nums[i]);
            m[nums[i]]++;
            m[t]++;
        }
        return m.size();
    }
};