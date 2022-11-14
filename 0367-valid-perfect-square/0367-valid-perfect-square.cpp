class Solution {
public:
    bool isPerfectSquare(int n) {
        int t=sqrt(n);
        if(t*t==n)
            return true;
        else
            return false;
    }
};