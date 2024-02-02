class Solution {
public:
    int maxDepth(string s) {
        int res = 0;
        int ans = 0;
        for(int i=0;i<s.length();i++){
            if(s.substr(i,1) == "("){
                res++;
                ans = max(res,ans);
            }else if(s.substr(i,1) == ")"){
                res--;
            }
        }
        return ans;
    }
};