// class Solution {
// public:
//     int minSwapsCouples(vector<int>& r) {
//         int n=r.size();
//         map<int,int>m;
//         vector<bool>vis(n);
//         for(int i=0;i<n;i+=2){
//             m[i]=i+1;
//             m[i+1]=i;
//         }
//         for(int i=0;i<n;i+=2){
//             if(m[r[i]]==m[r[i+1]]){
//                 continue;
//             }
//             else{
//                 for(int j=i+1;j<n;j++){
//                     if(r[i]==m[r[i]])
//                 }
//             }
//         }
//     }
// };
class Solution {
public:
    int minSwapsCouples(vector<int>& r){
        int n=r.size(),c=0;
        for(int i=0;i<n;i+=2){
            if(r[i]%2==0){
                if(r[i+1]==1+r[i])
                    continue;
                else{
                    for(int j=i+1;j<n;j++){
                        if(r[j]==r[i]+1){
                            swap(r[j],r[i+1]);
                            c++;
                            break;
                        }
                    }
                }
            }
            else{
                if(r[i+1]==r[i]-1)
                    continue;
                else{
                    for(int j=i+1;j<n;j++){
                        if(r[j]==r[i]-1){
                            swap(r[j],r[i+1]);
                            c++;
                            break;
                        }
                    }
                }
            }
        }
        return c;
    }
};