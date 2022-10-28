class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        for(int i=0;i<9;i++){
            map<int,int>r;
            map<int,int>c;
            for(int j=0;j<9;j++){
                if(isdigit(b[i][j])){
                    r[b[i][j]]++;
                    if(r[b[i][j]]>1)
                    return false;
                }
                if(isdigit(b[j][i])){
                    c[b[j][i]]++;
                    if(c[b[j][i]]>1)
                    return false;
                }
            }
        }
        map<pair<pair<int,int>,int>,int>m;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(isdigit(b[i][j])){
                    m[{{i/3,j/3},b[i][j]}]++;
                    if(m[{{i/3,j/3},b[i][j]}]>1)
                        return false;
                }
            }
        }
        return true;
    }
};