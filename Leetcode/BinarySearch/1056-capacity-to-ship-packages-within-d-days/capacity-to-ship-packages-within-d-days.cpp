class Solution {
public:
    int func(vector<int>& weights, int cap){
        int counter = 0;
        int sum = 0;
        for(int i=0;i<weights.size();i++){
            sum += weights[i];
            if(sum > cap){
                sum = weights[i];
                counter++;
            }
        }
        if(sum <= cap){
            counter++;
        }
        return counter;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int m = 0;
        int ma = 0;
        for(int i=0;i<weights.size();i++){
            m += weights[i];
            if(ma < weights[i]){
                ma = weights[i];
            }
        }
        int l = ma;
        int r = m;
        int ans = 0;
        while(l<=r){
            int mid = (l+r)/2;
            if(func(weights, mid) <= days){
                r = mid -1;
                ans = mid;
            }else{
                l = mid+1;
            }
        }
        return ans;
    }
};