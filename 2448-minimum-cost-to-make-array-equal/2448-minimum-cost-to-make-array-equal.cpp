#define ll long long
class Solution {
public:
    ll f(vector<int>& a, vector<int>& cost,ll m){
        ll t=0;
        for(int i=0;i<a.size();i++){
            t+=abs(a[i]-m)*cost[i];
        }
        return t;
    }
    long long minCost(vector<int>& nums, vector<int>& cost) {
        ll ans=LONG_MAX;
        ll mx=*max_element(nums.begin(),nums.end());
        ll mn=*min_element(nums.begin(),nums.end());
        while(mn<=mx){
            ll m=mn+(mx-mn)/2,s=0,s1,s2;
            s=f(nums,cost,m);
            if(s<ans)
                ans=s;
            s1=f(nums,cost,m+1);
            s2=f(nums,cost,m-1);
            if(s<s1&&s<s2)
                break;
            else if(s1<s2){
                ans=min(ans,s1);
                mn=m+1;
            }
            else{
                ans=min(ans,s2);
                mx=m-1;
            }
        }
        return ans;
    }
};