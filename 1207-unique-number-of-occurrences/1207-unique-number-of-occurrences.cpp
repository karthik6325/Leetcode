class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m,p;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        for(auto [a,b]:m){
            p[b]++;
            if(p[b]>1)
                return false;
        }
        return true;
    }
};