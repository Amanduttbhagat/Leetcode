class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            if(map.count(nums[i])!=0){
                if(abs(i-map[nums[i]]) <= k)
                    return true;
            }
            map[nums[i]] = i;
        }
        return false;
        }
};