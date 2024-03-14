class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> dir = {1};
        vector<vector<int>> res = {{1}}; 
        if(numRows == 1){
            return res;
        }else{
            int u = 1;
            int l = 1;
            for(int i=0;i<numRows-1;i++){
                vector<int> inner;
                inner.push_back(1);
                for(int j=0;j<i;j++){
                    inner.push_back(dir[j]+dir[j+1]);
                }
                inner.push_back(1);
                res.push_back(inner);
                dir = inner;
                l = inner.size();
            }
        }
        return res;
    }
};