class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& q) {
        vector<int>ans,a;
        int m=1e9+7;
        for(int i=0;i<32;i++){
            if((n&(1<<i))!=0)
                a.push_back(1<<i);
        }
        for(int i=0;i<q.size();i++){
            long long s=1;
            for(int j=q[i][0];j<=q[i][1];j++)
                s=(s*a[j])%m;
            ans.push_back(s);
        }
        return ans;
    }
};