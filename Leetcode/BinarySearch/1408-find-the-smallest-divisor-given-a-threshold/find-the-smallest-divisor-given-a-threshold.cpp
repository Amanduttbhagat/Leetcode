class Solution {
public:
    int func(vector<int>& nums, int divisor){
        int t = 0;
        for(int i=0;i<nums.size();i++){
            t += ceil(double(nums[i]/(double)divisor));
        }
        return t;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int m = 0;
        for(int i=0;i<nums.size();i++){
            if(m < nums[i]){
                m = nums[i];
            }
        }
        int l = 1;
        int r = m;
        int ans = -1;
        while(l<=r){
            int mid = (l+r)/2;
            if(func(nums, mid) <= threshold){
                ans = mid;
                r = mid - 1;
            }else{
                l = mid+1;
            }
        }
        return ans;
    }
};