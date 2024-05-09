class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {

        int ans = 0, c = capacity, n = plants.size();


        for (int i = 0; i < n; i++) {
            if (plants[i] <= c) {
                c -= plants[i];
                ans++;

            }
            else {
                ans += 2 * (i);
                c = capacity;
                c -= plants[i];
                ans++;
            }
        }
        return ans;
    }
};