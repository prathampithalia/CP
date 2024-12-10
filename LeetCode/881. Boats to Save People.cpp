class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();

        int l = 0, h = n - 1;
        sort(people.begin(), people.end());

        int cnt = 0;

        while (l <= h) {
            if (people[l] + people[h] <= limit) {
                l++;
            }
            cnt++;
            h--;
        }

        return cnt;
    }
};