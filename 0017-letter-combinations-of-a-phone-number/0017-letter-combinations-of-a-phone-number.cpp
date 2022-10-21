class Solution {
public:
    vector<string> letterCombinations(string d) {
        vector<string>s;
        if(d.size()==0)
            return s;
        map<char,string>a;
        a.insert({2,"abc"});
        a.insert({3,"def"});
        a.insert({4,"ghi"});
        a.insert({5,"jkl"});
        a.insert({6,"mno"});
        a.insert({7,"pqrs"});
        a.insert({8,"tuv"});
        a.insert({9,"wxyz"});
        string b;
        check(b,a,d.size(),0,s,d);
        return s;
    }
    void check(string b,map<char,string>&a,int l,int in,vector<string>&s,string &d){
        if(in>=l){
            s.push_back(b);
            return;
        }
        string t=a[d[in]-'0'];
        for(int i=0;i<t.size();i++){
            b.push_back(t[i]);
            check(b,a,l,in+1,s,d);
            b.pop_back();
        }
    }
};