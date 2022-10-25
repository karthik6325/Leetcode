class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) {
        int i=0,j=0,m=0,n=0; 
        while(i<w1.size()&&j<w2.size()){            
            if(w1[i][m++]!=w2[j][n++])
                return false;
            if(m>=w1[i].size()){
                i++;
                m=0;
            }
            if(n>=w2[j].size()){
                j++;
                n=0;
            }
        }
        return i==w1.size()&&j==w2.size();
    }
};