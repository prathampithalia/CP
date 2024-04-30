class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> ans(nums.begin(),nums.end());
        sort(ans.begin(),ans.end());
        for(int i = 0  ; i<nums.size() ; i+=2){
            swap(ans[i] , ans[i+1]);
        }
        return ans ;
    }   
};