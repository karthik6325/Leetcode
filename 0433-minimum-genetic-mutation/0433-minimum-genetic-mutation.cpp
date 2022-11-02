class Solution {
public:
    int minMutation(string b, string e, vector<string>& w) {
        unordered_set<string> dict(w.begin(),w.end());
        queue<pair<string,int>>q;
        q.push({b,1});
        dict.erase(b);
        char m[4]={'A','C','G','T'};
        while(!q.empty()){
            auto t=q.front().first;
            auto s=q.front().second;
            q.pop();
            if(t==e)
                return s-1;
            for(int i=0;i<8;i++){
                char a=t[i];
                for(int j=0;j<4;j++){
                    t[i]=m[j];
                    if(dict.find(t)!=dict.end()){
                        q.push({t,s+1});
                        dict.erase(t);
                    }
                }
                t[i]=a;
            }
        }
        return -1;
    }
};