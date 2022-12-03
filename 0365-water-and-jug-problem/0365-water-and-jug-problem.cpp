class Solution {
public:
    bool canMeasureWater(int a, int b, int c) {
        if(c>a+b)
            return 0;
        return c==0||c%__gcd(a,b)==0;
    }
};