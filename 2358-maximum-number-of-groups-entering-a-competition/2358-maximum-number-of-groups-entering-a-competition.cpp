class Solution {
public:
    int maximumGroups(vector<int>& g) {
    int res = sqrt(g.size() * 2);
    return res - (res * (res + 1) / 2 > g.size());
    }
};