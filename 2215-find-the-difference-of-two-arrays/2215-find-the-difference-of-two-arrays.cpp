class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans;
        vector<int>b,c;
        map<int,int>m,n;
        for(int i=0;i<nums1.size();i++)
            m[nums1[i]]++;
        for(int i=0;i<nums2.size();i++)
            n[nums2[i]]++;
        for(auto i:m){
            if(n.find(i.first)==n.end())
                b.push_back(i.first);
        }
        ans.push_back(b);
        for(auto i:n){
            if(m.find(i.first)==m.end())
                c.push_back(i.first);
        }
        ans.push_back(c);
        return ans;
    }
};