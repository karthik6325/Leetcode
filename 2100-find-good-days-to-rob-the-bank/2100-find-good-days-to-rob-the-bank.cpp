class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& se, int t) {
        int s=0,n=se.size();
        vector<int>p(n),q(n);
        p[0]=0;
        q[n-1]=0;
        for(int i=1;i<n;i++){
            if(se[i]<=se[i-1])
                p[i]=1+p[i-1];
        }
        for(int i=n-2;i>=0;i--){
            if(se[i]<=se[i+1])
                q[i]=1+q[i+1];
        }
        // for(int i=0;i<n;i++){
        //     cout<<p[i]<<" ";
        // }cout<<"\n";
        // for(int i=0;i<n;i++){
        //     cout<<q[i]<<" ";
        // }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(p[i]>=t&&q[i]>=t)
                ans.push_back(i);
        }
        return ans;
    }
};