class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsd) {
        priority_queue<int,vector<int>,greater<int>>p;
        int g=0;
        for(int i=0;i<numsd.size();i++)
            g=__gcd(g,numsd[i]);
        for(int i=0;i<nums.size();i++)
            p.push(nums[i]);
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(g%p.top()==0){
                return c;
            }
            p.pop();
            c++;
        }
        return -1;
    }
};