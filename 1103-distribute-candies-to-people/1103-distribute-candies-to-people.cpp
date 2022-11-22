class Solution {
public:
    vector<int> distributeCandies(int c, int n) {
        vector<int>ans(n);
        int k=1,f=0,t=0,x=n;
        while(1){
            if(c-k<0){
                ans[t++%x]+=c;
                break;
            }
            c-=k;
            ans[t++%x]+=k++;
        }
        return ans;
    }
};