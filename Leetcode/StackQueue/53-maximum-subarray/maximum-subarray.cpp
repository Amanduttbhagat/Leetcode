class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = 0;
        int fin = INT_MIN;
        for(int i=0;i<nums.size();i++){
            res += nums[i];
            fin = std::max(res, fin);
            if(res < 0){
                res = 0;
            }
        }
        return fin;
    }
};