class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            int ele = nums[i];
            bool a = false;
            for(int j=0;j<nums.size();j++){
                if(nums[i] < nums[(i+j+1)%nums.size()]){
                    res.push_back(nums[(i+j+1)%nums.size()]);
                    a = true;
                    break;
                }
            }
            if(!a){
                res.push_back(-1);
            }
        }
        return res;
    }
};