class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int sizes = s.length();
        int sizet = t.length();
        if(sizes != sizet){
            return false;
        }
        unordered_map<char, vector<int>> map1;
        unordered_map<char, vector<int>> map2;

        for(int i=0;i<sizes;i++){
            map1[s[i]].push_back(i);
            map2[t[i]].push_back(i);
        }
        for(int i=0;i<sizes;i++){
            if(map1[s[i]] != map2[t[i]]){
                return false;
            }
        }
        return true;
    }
};