class Solution {
public:
    bool canMeasureWater(int a, int b, int c) {
        int possible[]={a,-a,b,-b};
        queue<int>q;
        q.push(0);
        vector<int>vis(a+b+1,0);
        vis[0]=1;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            if(node==c)
                return true;
            for(int i=0;i<4;i++){
                int t=node+possible[i];
                if(t>=0&&t<=a+b&&vis[t]==0){
                    q.push(t);
                    vis[t]=1;
                }
            }
        }
        return false;
    }
};
