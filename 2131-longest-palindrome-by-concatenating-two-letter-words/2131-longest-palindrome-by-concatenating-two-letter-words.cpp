class Solution {
public:
    int longestPalindrome(vector<string>& words) {
       int c[26][26]={}; 
       int ans=0;
			for(auto w:words){
				int a=w[0]-'a';
				int b=w[1]-'a'; 
				if(c[b][a]){
					ans+=4;          
					c[b][a]--;   
				}
                else
					c[a][b]++;  
			}
			for(int i=0;i<26;i++){
				if(c[i][i]){
					ans+=2;
					break;
				}
			 }
	return ans;
    }
};