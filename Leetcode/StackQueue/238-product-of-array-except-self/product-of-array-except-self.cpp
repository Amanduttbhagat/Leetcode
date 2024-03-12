class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int a = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                a++;
            }
        }
        if(a == 0){
            int pro = 1;
            for(int i =0;i<nums.size();i++){
                pro*=nums[i];
            }
            vector<int> vec;
            for(int i =0;i<nums.size();i++){
                vec.push_back(pro/nums[i]);
            }
            return vec;
        }else if(a == 1){
            vector<int> vec;
            int pro = 1;
            for(int i =0;i<nums.size();i++){
                if(nums[i]!=0){
                    pro*=nums[i];
                }
            }
            for(int i =0;i<nums.size();i++){
                if(nums[i]==0){
                    vec.push_back(pro);
                }else{
                    vec.push_back(0);
                }
            }
            return vec;
        }else{
            vector<int> vec(nums.size(),0);
            return vec;
        }
    }
};