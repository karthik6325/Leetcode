class Solution {
public:
    int maximumGroups(vector<int>& g) {
        sort(g.begin(),g.end());
        int s=0,t=0,ans=0,m=0,n=0;
        for(int i=0;i<g.size();i++){
            t+=g[i];
            m++;
            if(t>s&&m>n){
                ans++;
                s=t;
                t=0;
                n=m;
                m=0;
            }
        }
        return ans;
    }
};