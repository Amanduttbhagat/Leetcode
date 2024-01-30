class Solution {
public:
    string largestOddNumber(string num) {
        int index = -1;
        for(int i=num.length()-1; i>=0; i--){
            int temp = (int)num[i];
            if(temp%2 == 1){
                return num.substr(0, i+1);
            }
        }
        return "";
    }
};