class Solution {
public:
    int val(char &a){
        if(a=='I')
            return 1;
        else if(a=='V')
            return 5;
        else if(a=='X')
            return 10;
        else if(a=='L')
            return 50;
        else if(a=='C')
            return 100;
        else if(a=='D')
            return 500;
        else if(a=='M')
            return 1000;
        return 0;
    }
    int romanToInt(string s) {
        vector<int> a;
        int n=s.size();
        int sum=val(s[n-1]);
         for(int i=n-2;i>=0;i--){
             if(val(s[i])<val(s[i+1])){
                 sum-=val(s[i]);
             }
             else
                 sum+=val(s[i]);
    }
            return sum;
    }
};