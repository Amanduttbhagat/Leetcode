class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()){
            return false;
        }
        int n = s.length();
        for(int i=0;i<n;i++){
            string h = s.substr(0,i+1);
            // cout<<h<<endl;
            string q = s.substr(i+1);
            // cout<<q<<endl;
            q += h;
            // cout<<ans<<endl;
            if(q == goal){
                return true;
            }
        }
        return false;
    }
};