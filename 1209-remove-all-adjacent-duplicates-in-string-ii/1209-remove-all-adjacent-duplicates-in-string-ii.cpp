class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n = s.size();
        if(n<k) return s;
        stack<pair<char,int>> st;
        for(int i=0;i<s.length();i++){
            if(st.empty()){
                st.push({s[i],1});
                continue;
            }
            auto p= st.top();
            if(st.empty() || p.first!=s[i])
                st.push({s[i],1});
            else{
                int cnt= p.second+1;
                st.push({s[i],cnt});
                if(cnt==k){
                    if(cnt==st.size())
                    {
                        stack<pair<char,int>> s;
                        st=s;
                        continue;
                    }
                    while(cnt--)
                    {
                        st.pop();
                    }
                }
            }
        //    cout<<p.first<<"->"<<p.second<<" ";
        }
        string ans="";
        while(st.size())
        {
            pair<char,int> p= st.top();
            char c= p.first;
            ans+=c;
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};