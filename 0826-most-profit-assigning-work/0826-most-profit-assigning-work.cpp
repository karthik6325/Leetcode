// class Solution {
// public:
//     int maxProfitAssignment(vector<int>& d, vector<int>& p, vector<int>& w) {
//         vector<pair<int,int>>m;
//         int ans=0;
//         for(int i=0;i<d.size();i++)
//             m.push_back({d[i],p[i]});
//         sort(m.begin(),m.end());
//         int mx=0;
//         for(auto i:m){
//             mx=max(mx,i.second);
//             i.second=mx;
//         }
//         sort(w.begin(),w.end());
//         for(int i=0;i<w.size();i++){
//             mx=0;
//             int b=0,e=d.size()-1;
//             while(b<=e){
//                 int md=b+(e-b)/2;
//                 if(w[i]>=m[md].first){
//                     mx=max(mx,m[md].second);
//                     b=md+1;
//                 }
//                 else
//                     e=md-1;
//             }
//             ans+=mx;
//         }
//         return ans;
//     }
// };
class Solution {
public:
    int maxProfitAssignment(vector<int>& d, vector<int>& profit, vector<int>& worker) {
        int ans=0;
        sort(worker.begin(),worker.end());
        vector<pair<int,int>> v;
        for(int i=0;i<profit.size();i++){
            v.push_back(make_pair(d[i],profit[i]));
        }
        sort(v.begin(),v.end());
        int mxt=0;
        for(int i=0;i<v.size();i++){
            mxt = max(mxt,v[i].second);
            v[i].second=mxt;
        }
        for(int i=0;i<worker.size();i++){
            int mx=0;
            int low=0,high=v.size();
            while(low<=high){
                int mid=(high+low)/2;
                if(worker[i]>=v[mid].first){
                    mx=max(mx,v[mid].second);
                    low=mid+1;
                }
                if(worker[i]<v[mid].first){
                    high=mid-1;
                }
            }
            ans+=mx;
        }
        
        return ans;
    }
};
