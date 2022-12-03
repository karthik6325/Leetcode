class Solution {
public:
    bool canMeasureWater(int a, int b, int c) {
        return c==0||c<=a+b&&c%__gcd(a,b)==0;
    }
};