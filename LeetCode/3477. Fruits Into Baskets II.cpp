class Solution {
public:
    int sol1(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        int place = 0, j = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (fruits[i] <= baskets[j]) {
                    place++;
                    baskets[j] = 0;
                    break;
                }
            }
        }

        return n - place;
    }

    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        return sol1(fruits, baskets);
    }
};