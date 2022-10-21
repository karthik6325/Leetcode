class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int>c,a;
        for(int i=0;i<nums.size();i++){
            c[nums[i]]++;
            if(c[nums[i]]>1&&abs(a[nums[i]]-i)<=k)
                return true;
            a[nums[i]]=i;
        }
        return false;
        
    }
};