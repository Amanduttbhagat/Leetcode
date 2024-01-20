class Solution {
public:
    int Group(vector<int>& nums, int k, int num){
        int count = 1;
        int s = 0;
        for(int i=0;i<nums.size();i++){
            if(s+nums[i] <= num){
                s += nums[i];
            }else{
                count++;
                s = nums[i];
            }
        }
        return count;
    }
    int splitArray(vector<int>& nums, int k) {
        int y = 0;
        int s = 0;
        for(int i=0;i<nums.size();i++){
            s += nums[i];
            if(y < nums[i]){
                y = nums[i];
            }
        }
        int l = y;
        int r = s;
        while(l<=r){
            int mid = (l+r)/2;
            int group = Group(nums, k, mid);
            if(group <= k){
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        return l;
    }
};