class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>a;
        for(int i=0;i<nums.size();i++){
            a[nums[i]]++;
            if(a[nums[i]]>1)
                nums[i]=INT_MAX;
        }
        sort(nums.begin(),nums.end());
        return a.size();
    }
};