//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<vector<int>>dp;
    int check(vector<vector<int>>& points, int &n,int i, int j){
        if(i==n) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int l=0,r=0;
        for(int k=0;k<3;k++){
            if(k!=j) l=points[i][k]+check(points,n,i+1,k);
            r=max(l,r);
        }
        return dp[i][j]=r;
    }
    int maximumPoints(vector<vector<int>>& points, int n) {
        // Code here
        dp.resize(n+1,vector<int>(4,-1));
        return check(points,n,0,3);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> points;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            points.push_back(temp);
        }

        Solution obj;
        cout << obj.maximumPoints(points, n) << endl;
    }
    return 0;
}
// } Driver Code Ends