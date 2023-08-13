//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    vector<string>ans;
    static bool cmp(string &x,string &y){
        for(int i=0;i<x.size();i++){
            if(x[i]<y[i]) return x<y;
        }
        return y<x;
    }
    void check(string s, int i,int &n){
        if(i==n){
            ans.push_back(s);
            return;
        }
        for(int j=i;j<n;j++){
            swap(s[i],s[j]);
            check(s,i+1,n);
            swap(s[i],s[j]);
        }
    }
    vector<string> permutation(string s)
    {
        //Your code here
        int n=s.size();
        check(s,0,n);
        sort(ans.begin(),ans.end(),cmp);
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends