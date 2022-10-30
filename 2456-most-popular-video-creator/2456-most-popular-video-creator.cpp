class Solution {
public:
    vector<vector<string>> mostPopularCreator(vector<string>& c, vector<string>& id, vector<int>& v) {
        map<string,int>m,b;
        map<string,long long>n;
        map<pair<string,int>,string>a;
        vector<vector<string>>ans;
        long long mx=0;
        for(int i=0;i<c.size();i++){
            if(a.find({c[i],v[i]})!=a.end())
                a[{c[i],v[i]}]=min(id[i],a[{c[i],v[i]}]);
            else
                a[{c[i],v[i]}]=id[i];
            b[c[i]]=max(v[i],b[c[i]]);
            n[c[i]]=(n[c[i]]+v[i]);
            //mx=max(mx,n[c[i]]);
            if(mx<n[c[i]])
                mx=n[c[i]];
        }
        for(auto i:n){
            if(mx==i.second){
                ans.push_back({i.first,a[{i.first,b[i.first]}]});
            }
                
        }
        return ans;
    }
};