class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans(nums.size());
        int k=0;
        for(int i=0;i<nums.size();i+=2)
            ans[i]=nums[k++];
        for(int i=1;i<nums.size();i+=2)
            ans[i]=nums[k++];
        return ans;
    }
};