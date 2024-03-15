class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n = matrix[0].size();
        int m = matrix.size();
        vector<int> result;
        for(int i=0;i<matrix.size();i++){
            int column = 0;
            int min = INT_MAX;
            bool t = true;
            for(int j=0;j<n;j++){
                if(min >= matrix[i][j]){
                    min = matrix[i][j];
                    column = j;
                }
            }
            for(int k=0;k<matrix.size();k++){
                if(matrix[k][column] > min){
                    t = false;
                    break;
                }
            }
            if(t){
                result.push_back(min);
            }
        }
        return result;
    }
};

// #include <vector>
// #include <unordered_map>
// #include <climits>
// #include <algorithm>
// using namespace std;

// class Solution {
// public:
//     vector<int> luckyNumbers (vector<vector<int>>& matrix) {
//         int m = matrix.size(), n = matrix[0].size();
//         vector<int> result;

//         for (int i = 0; i < m; ++i) {
//             int min_val = INT_MAX;
//             int col_index = 0;
//             // Find min in the row
//             for (int j = 0; j < n; ++j) {
//                 if (matrix[i][j] < min_val) {
//                     min_val = matrix[i][j];
//                     col_index = j;
//                 }
//             }
//             // Check if this is the max in its column
//             bool is_max_in_col = true;
//             for (int k = 0; k < m; ++k) {
//                 if (matrix[k][col_index] > min_val) {
//                     is_max_in_col = false;
//                     break;
//                 }
//             }
//             if (is_max_in_col) {
//                 result.push_back(min_val);
//             }
//         }

//         return result;
//     }
// };
