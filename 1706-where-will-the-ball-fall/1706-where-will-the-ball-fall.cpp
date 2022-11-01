class Solution {
public:
    int check(vector<vector<int>>& g,int in,int jn,int n,int m){
        if(in==n)
            return jn;
        if(g[in][jn]==1&&jn+1<m&&g[in][jn+1]==1)
            return check(g,in+1,jn+1,n,m);
        if(g[in][jn]==-1&&jn-1>=0&&g[in][jn-1]==-1)
            return check(g,in+1,jn-1,n,m);
        return -1;
    }
    vector<int> findBall(vector<vector<int>>& g) {
        int n=g.size(),m=g[0].size();
        vector<int>ans(m);
        for(int i=0;i<m;i++)
            ans[i]=check(g,0,i,n,m);
        return ans;
    }
};
