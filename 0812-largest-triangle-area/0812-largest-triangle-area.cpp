class Solution {
public:
    double area(int a1,int a2,int b1,int b2,int c1,int c2){
        double a=sqrt(pow(a1-b1,2)+pow(a2-b2,2));
        double b=sqrt(pow(a1-c1,2)+pow(a2-c2,2));
        double c=sqrt(pow(c1-b1,2)+pow(c2-b2,2));
        double s=(a+b+c)/2;
        double ans=s*(s-a)*(s-b)*(s-c);
        ans=sqrt(ans);
        return ans;
    }
    double largestTriangleArea(vector<vector<int>>& p) {
        double ans=0;
        for(int i=0;i<p.size();i++){
            for(int j=i+1;j<p.size();j++){
                for(int k=j+1;k<p.size();k++){
                    double a1=p[i][0],a2=p[i][1],b1=p[j][0],b2=p[j][1],c1=p[k][0],c2=p[k][1];
                    ans=max(ans,area(a1,a2,b1,b2,c1,c2));
                }
            }
        }
        return ans;
    }
};