class Solution {
public:
    int minMoves(int t, int m) {
        int ans=0;
        while(t>0){
            if(t/2>1&&m){
                if(t%2==0){
                    t/=2;
                    m--;
                }
                else
                    t--;
                ans++;
            }
            else{
                ans+=t-1;
                break;
            }
        }
        return ans;
    }
};