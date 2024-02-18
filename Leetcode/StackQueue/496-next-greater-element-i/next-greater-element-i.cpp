class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
            int q = true;
            for(int j=0;j<nums2.size();j++){
                if(nums1[i] == nums2[j]){
                    int k = j;
                    while(k<nums2.size()){
                        if(nums2[k]>nums2[j]){
                            res.push_back(nums2[k]);
                            j = nums2.size();
                            q = false;
                            break;
                        }
                        k++;
                    }
                }
            }
            if(q){
                res.push_back(-1);
            }
        }
        return res;
    }
};