#include <algorithm>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> seen;
        for(int num: nums){
            if(seen.count(num)>0)
                return true;
            seen.insert(num);
        }
        return false;
        // set<int> s;
        
        // for(int i=0;i<nums.size();i++){
        //     s.insert(nums[i]);
        // }

        // if(s.size() == nums.size()){
        //     return false;
        // }else{
        //     return true;
        // }
        // std::sort(nums.begin(), nums.end());
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i] == nums[i+1]){
        //         return true;
        //     }
        // }
        // return false;
    }
};