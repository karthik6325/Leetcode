//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


vector<int> Smallestonleft(int arr[], int n);


int main() {
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n;
	    cin >> n;
	    int arr[n+1];
	    
	    for(int i=0;i<n;i++){
	        cin>> arr[i];
	    }
	    
	    vector<int> b;
	    b = Smallestonleft(arr, n);
	    for(int i=0;i<n;i++)
	        cout << b[i] << " ";
	       
	    cout << endl;
	    
	    
	}
	
	return 0;
}
// } Driver Code Ends


vector<int> Smallestonleft(int a[], int n)
{
    // Complete the function
    set<int>s;
    vector<int>ans;
    ans.push_back(-1);
    s.insert(a[0]);
    for(int i=1;i<n;i++){
        auto t=s.lower_bound(a[i]);
        if(t==s.begin()){
            ans.push_back(-1);
        }
        else{
            --t;
           ans.push_back(*t);
        }
        s.insert(a[i]);
    }
    return ans;
}