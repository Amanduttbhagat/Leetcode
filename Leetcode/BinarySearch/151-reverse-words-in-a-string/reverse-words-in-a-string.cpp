class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int n = s.length();
        string result = "";
        while(i<n){
            while(s[i] == ' ' && i<n){
                i++;
            }
            if(i>=n){
                break;
            }
            int j = i+1;
            while(j<n && s[j] != ' '){
                j++;
            }
            if(result.length() == 0){
                result = s.substr(i,j-i);
            }else{
                result = s.substr(i,j-i) + " " + result;
            }
            i = j+1;
        }
        return result;
    }
};