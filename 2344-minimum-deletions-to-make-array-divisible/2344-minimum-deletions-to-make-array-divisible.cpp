class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsd) {
        int g=0;
        for(int i=0;i<numsd.size();i++)
            g=__gcd(g,numsd[i]);
        sort(nums.begin(),nums.end());
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(g%nums[i]==0)
                return c;
            c++;
        }
        return -1;
    }
};