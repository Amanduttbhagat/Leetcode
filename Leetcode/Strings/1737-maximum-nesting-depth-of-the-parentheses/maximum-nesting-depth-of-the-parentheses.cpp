class Solution {
public:
    int maxDepth(string s) {
        int res = 0;
        int ans = 0;
        for(int i=0;i<s.length();i++){
            if(s.substr(i,1) == "("){
                res++;
            }else if(s.substr(i,1) == ")"){
                ans = max(res,ans);
                res--;
            }
        }
        return ans;
    }
};