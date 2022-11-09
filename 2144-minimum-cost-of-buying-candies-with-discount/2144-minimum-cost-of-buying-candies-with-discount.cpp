class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int res = 0;
        sort(rbegin(cost), rend(cost));
        for (int i = 0; i < cost.size(); ++i)
            res += i % 3 == 2 ? 0 : cost[i];
        return res;
    }
};