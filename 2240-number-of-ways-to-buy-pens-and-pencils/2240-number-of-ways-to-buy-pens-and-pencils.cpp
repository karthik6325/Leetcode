class Solution {
public:
    long long waysToBuyPensPencils(int t, int c1, int c2) {
        long long ans=0,c=0,i=0;
        while(i*c1<=t){
            ans+=(t-c1*i)/c2+1;
            i++;
        }
    return ans;
    }
};