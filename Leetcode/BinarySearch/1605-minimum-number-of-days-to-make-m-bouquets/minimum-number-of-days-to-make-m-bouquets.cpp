class Solution {
public:
    int func(vector<int>& bloomDay, int day, int k){
        int counter = 0;
        int ans = 0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                counter++;
            }else{
                ans += (counter/k);
                counter = 0;
            }
        }
        ans += (counter/k);
        return ans;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(bloomDay.size() < long(m)*long(k)){
            return -1;
        }
        int ma = bloomDay[0];
        int mi = bloomDay[0];
        for(int i=0;i<bloomDay.size();i++){
            if(ma < bloomDay[i]){
                ma = bloomDay[i];
            }
            if(mi > bloomDay[i]){
                mi = bloomDay[i];
            }
        }
        int l = mi;
        int r = ma;
        int ans = 0;
        while(l<=r){
            int mid = (l+r)/2;
            if(func(bloomDay, mid, k) >= m){
                r = mid-1;
                cout<<ma<<endl;
                ans = mid;
            }else{
                l = mid+1;
            }
        }
        return ans;
    }
};