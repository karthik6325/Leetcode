class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
        int t=0,n=nums.size(),c=1;
        t=nums[0];
        for(int i=1;i<nums.size();i++){
            if(t==nums[i]){
                nums[i]=101;
            }
            else{
                t=nums[i];
                c++;
            }
        }
        sort(nums.begin(),nums.end());
        return c;
    }
};