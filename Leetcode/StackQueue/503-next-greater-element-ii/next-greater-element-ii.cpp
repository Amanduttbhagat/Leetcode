class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums){
        int n = nums.size();
        stack<int> st;
        vector<int> res(n,-1);
        for (int i = n * 2 - 1; i >= 0; i--) {
            while (!st.empty() && st.top() <= nums[i % n]) {
                st.pop();
            }
            if (!st.empty()) {
                res[i % n] = st.top();
            }
            st.push(nums[i % n]);
    }

    return res;
        // for(int i=n-1;i>=0;i--){
        //     while(!st.empty() && st.top() < nums[i]){
        //         st.pop();
        //     }
        //     if (!st.empty()) {
        //         res[i] = st.top();
        //     }
        //     st.push(nums[i]);
        // }
        // for(int i=n-1;i>=0;i--){
        //     if(st.top() == nums[i]){
        //         break;
        //     }
        //     while(!st.empty() && st.top() < nums[i]){
        //         st.pop();
        //     }
        //     if (!st.empty()) {
        //         res[i] = st.top();
        //     }
        //     st.push(nums[i]);
        // }
        // return res;
    }
    //     vector<int> res(nums.size(), -1);
    //     std::stack<int> st;
    //     int n = nums.size();
    //     for(int i=0;i<n*2;i++){
    //         while(!st.empty() && nums[st.top()] < nums[i%n]){
    //             res[st.top()] = nums[i%n];
    //             st.pop();
    //         }
    //         if(i<n) st.push(i);
    //     }
    //     return res;
    // }
// O(n2) time and O(n) space complexity
    // vector<int> nextGreaterElements(vector<int>& nums) {
    //     vector<int> res;
    //     for(int i=0;i<nums.size();i++){
    //         int ele = nums[i];
    //         bool a = false;
    //         for(int j=0;j<nums.size();j++){
    //             if(nums[i] < nums[(i+j+1)%nums.size()]){
    //                 res.push_back(nums[(i+j+1)%nums.size()]);
    //                 a = true;
    //                 break;
    //             }
    //         }
    //         if(!a){
    //             res.push_back(-1);
    //         }
    //     }
    //     return res;
    // }
};