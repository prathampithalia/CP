class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // vector<int> p , n ;
        // for(auto i : nums){
        //     if( i < 0 ) n.push_back(i);
        //     else p.push_back(i); 
        // }
        // vector<int> ans ;
        // for(int i = 0 ; i<p.size() ;i++){
        //     ans.push_back(p[i]);
        //     ans.push_back(n[i]);
        // }

        int posIndex = 0, negIndex = 1;
        vector<int> ans(nums.size());
        for (int i = 0;i < nums.size(); i++) {
            if (nums[i] > 0) {
                ans[posIndex] = nums[i];
                posIndex += 2;
            }
            else {
                ans[negIndex] = nums[i];
                negIndex += 2;
            }
        }

        return ans;
    }
};