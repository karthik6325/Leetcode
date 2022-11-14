class Solution {
public:
    int d(int n){
        int d=0;
        while(n>0){
            d+=n%10;
            n/=10;
        }
        return d;
    }
    int addDigits(int n) {
        int ans=n;
        while(n>10){
            ans=d(n);
            n=ans;
        }
        return ans>9?d(ans):ans;
    }
};