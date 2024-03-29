class Solution {
public:
    string removeDuplicates(string s) {
       stack<char>st;
       for(int i=0;i<s.size();i++){
          if(st.size()>0 and st.top()==s[i]){
               while(st.size() and st.top()==s[i]){
               st.pop();
           }
          }
           else st.push(s[i]);
       }
       string ans;
       while(st.size()){
           ans.push_back(st.top());
           st.pop();
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};
        
    
