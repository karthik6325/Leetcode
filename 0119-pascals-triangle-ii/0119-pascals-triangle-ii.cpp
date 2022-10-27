class Solution {
public:
    vector<int> getRow(int r) {
        vector<vector<int>>a;
        for(int i=0;i<=r;i++){
            vector<int>b;
            for(int j=0;j<=i;j++)
            {
                if(j==0||j==i){
                    b.push_back(1);
                    continue;
                }
                else
                    b.push_back(a[i-1][j-1]+a[i-1][j]);
            }
            a.push_back(b);
        }
        return a[r];
    }
};