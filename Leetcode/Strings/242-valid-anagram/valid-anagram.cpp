class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<string, int> s_map;
        unordered_map<string, int> t_map;
        for(int i = 0;i<s.length();i++){
            s_map[s.substr(i,1)] = s_map[s.substr(i,1)] + 1;
            t_map[t.substr(i,1)] = t_map[t.substr(i,1)] + 1;
        }
        for(int i=0;i<s.length();i++){
            if(s_map[s.substr(i,1)] != t_map[s.substr(i,1)]){
                return false;
            }
        }
        return true;
    }
};