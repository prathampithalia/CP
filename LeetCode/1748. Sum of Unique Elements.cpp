class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> v;
        int ans = 0 ;
        for(auto i : nums){
            v[i]++;
        }
        for(auto i : v){
            if( i.second == 1 ) ans += i.first ;
        }

        return ans ;
    }
};