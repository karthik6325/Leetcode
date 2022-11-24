class Solution {
public:
    bool check(vector<vector<char>>& b,string &t,int r,int c,int in){
        if(r>=b.size()||r<0||c<0||c>=b[0].size()||b[r][c]!=t[in]||in>=t.size())
            return false;
        if(in==t.size()-1)
            return true;
        b[r][c]='$';
        bool ans=check(b,t,r+1,c,in+1)or
        check(b,t,r-1,c,in+1)or
        check(b,t,r,c-1,in+1)or
        check(b,t,r,c+1,in+1);
        b[r][c]=t[in];
        return ans;
    }
    bool exist(vector<vector<char>>& b, string w) {
        for(int i=0;i<b.size();i++){
            for(int j=0;j<b[0].size();j++){
               if(b[i][j]==w[0]){
                   if(check(b,w,i,j,0)){
                       return true;
                   }
               }
            }
        }
        return false;
    }
};