class Solution {
public:
    string removeOuterParentheses(string s) {
        string opening = "(";
        string closing = ")";
        int num = 0;
        string ans = "";
        for(int i=0;i<s.length();i++){
            string q = s.substr(i,1);
            if(q == opening){
                if(num == 0){
                    num++;
                    continue;
                }
                num++;
            }else{
                num--;
                if(num == 0){
                    continue;
                }
            }
            ans+=q;
        }
        return ans;
    }
};