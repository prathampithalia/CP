class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> v;

        for(auto i: stones){
            v[i]++;
        }
        int ans = 0 ;
        for(auto i: jewels){
            
                ans += v[i];
            
        }
        return ans ;
    }
};