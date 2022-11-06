class Solution {
public:
    bool s(int b,int e,vector<int>& nums,int t){
        while(b<=e){
            int m=b+(e-b)/2;
            if(t==nums[m])
                return true;
            else if(nums[m]>t)
                e=m-1;
            else
                b=m+1;
        }
        return false;
    }
    int findFinalValue(vector<int>& nums, int o) {
        int b=0,e=nums.size()-1;
        sort(nums.begin(),nums.end());
        while(1){
            if(s(b,e,nums,o))
                o*=2;
            else break;
        }
        return o;
    }
};