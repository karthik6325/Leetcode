class CMP{
    public:
    bool operator() (const pair<int, string> &a ,const pair<int, string> &b) {
        if(a.first == b.first)
            return a.second > b.second;
        else
            return a.first < b.first;
}
};
class Solution {
public:

    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> mp;
        for(auto it:words) mp[it]++;
        vector<string> ans;
        priority_queue<pair<int,string>,vector<pair<int,string>>,CMP> pq;
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        while(k!=0){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans;
    }
};