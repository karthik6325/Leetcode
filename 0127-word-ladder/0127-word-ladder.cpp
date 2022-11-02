class Solution {
public:
    int ladderLength(string b, string e, vector<string>& w) {
        unordered_set<string> dict(w.begin(),w.end());
        queue<pair<string,int>>q;
        q.push({b,1});
        dict.erase(b);
        while(!q.empty()){
            auto t=q.front().first;
            auto s=q.front().second;
            q.pop();
            if(t==e)
                return s;
            for(int i=0;i<t.size();i++){
                char a=t[i];
                for(char j='a';j<='z';j++){
                    t[i]=j;
                    if(dict.find(t)!=dict.end()){
                        q.push({t,s+1});
                        dict.erase(t);
                    }
                }
                t[i]=a;
            }
        }
        return 0;
    }
};