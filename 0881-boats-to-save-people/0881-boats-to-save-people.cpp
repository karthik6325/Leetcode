class Solution {
public:
    int numRescueBoats(vector<int>& p, int t) {
        sort(p.begin(),p.end());
        int b=0,e=p.size()-1,ans=0;
        while(b<=e){
            if(p[b]+p[e]<=t){
                ans++;
                b++;
                e--;
            }
            else{
                ans++;
                e--;
            }
        }
        return ans;
    }
};