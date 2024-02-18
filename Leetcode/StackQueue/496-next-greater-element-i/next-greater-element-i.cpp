class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    std::unordered_map<int, int> myMap;
    for (int i = 0; i < nums1.size(); i++) {
        myMap[nums1[i]] = i;
    }

    std::stack<int> myStack;
    std::vector<int> res(nums1.size(), -1);  // Initialize 'res' with -1

    for (int i = 0; i < nums2.size(); i++) {
        int cur = nums2[i];
        while (!myStack.empty() && cur > myStack.top()) {
            int val = myStack.top();  // Corrected from myStack.pop()
            myStack.pop();  // Pop after obtaining the top element
            int idx = myMap[val];
            res[idx] = cur;
        }
        if (myMap.find(cur) != myMap.end()) {
            myStack.push(cur);
        }
    }
    return res;

        // vector<int> res;
        // for(int i=0;i<nums1.size();i++){
        //     int q = true;
        //     for(int j=0;j<nums2.size();j++){
        //         if(nums1[i] == nums2[j]){
        //             int k = j;
        //             while(k<nums2.size()){
        //                 if(nums2[k]>nums2[j]){
        //                     res.push_back(nums2[k]);
        //                     j = nums2.size();
        //                     q = false;
        //                     break;
        //                 }
        //                 k++;
        //             }
        //         }
        //     }
        //     if(q){
        //         res.push_back(-1);
        //     }
        // }
        // return res;
    }
};