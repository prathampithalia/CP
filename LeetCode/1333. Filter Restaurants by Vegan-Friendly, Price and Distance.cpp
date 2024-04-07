bool rat(const vector<int>& a, const vector<int>& b) {
    if (a[1] == b[1])
        return a[0] > b[0];
    return a[1] > b[1];
}

class Solution {
public:
    vector<int> filterRestaurants(vector<vector<int>>& restaurants,
                                  int veganFriendly, int maxPrice,
                                  int maxDistance) {
        sort(restaurants.begin(), restaurants.end(), rat);
        vector<int> ans;

        for (int i = 0; i < restaurants.size(); i++) {
            if (restaurants[i][3] <= maxPrice &&
                restaurants[i][4] <= maxDistance) {
                if (veganFriendly == 0)
                    ans.push_back(restaurants[i][0]);
                else {
                    if (restaurants[i][2])
                        ans.push_back(restaurants[i][0]);
                }
            }
        }
        return ans;
    }
};