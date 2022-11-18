class Solution {
public:
    int countPrimes(int n){
        vector<bool> is_prime(n, true);
        int ans=0;
        if(n==0||n==1)
            return 0;
        is_prime[0] = is_prime[1] = false;
        for (int i = 2; i * i < n; i++){
            if (is_prime[i]){
                for (int j = i * i; j < n; j += i)
                    is_prime[j] = false;
            }
        }
        for(int i=0;i<n;i++){
            if(is_prime[i])
                ans++;
        }
        return ans;
    }
};