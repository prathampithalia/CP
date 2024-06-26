class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> v;
        int ans =0 ;
        for(auto i : nums){
            v[i]++;
        }

        for(auto i: v){
            ans += ((i.second-1)*i.second)/2;
        }
        return ans ;
    }
};