class Solution {
public:
    int findFinalValue(vector<int>& nums, int o) {
        while(1){
            if(find(nums.begin(),nums.end(),o)!=nums.end())
                o*=2;
            else break;
        }
        return o;
    }
};