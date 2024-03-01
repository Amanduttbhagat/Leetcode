class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int ans = 0; // stores garbade alswqays initialize
        for(int i=0;i<words.size();i++){
            int x = 0; // write ind
            bool a = true; // can write 1 as well
            if(words[i].length() > s.length()){
                continue;
            }
            while(x<s.length() && x<words[i].length()){
                if(words[i][x]==s[x]){
                    
                }else{
                    a = false;
                    break;
                }
                x++;
            }
            if(a == true){
                ans++;
            }
        }
        return ans;
    }
};