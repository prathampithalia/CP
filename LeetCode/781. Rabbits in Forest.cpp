class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int n = answers.size();

        unordered_map<int, int> mp;

        for (auto i : answers)
            mp[i]++;

        int ans = 0;

        for (auto i : mp) {

            int groupSize = i.first + 1;
            int reporters = i.second;

            int groups =
                (reporters / groupSize) + (bool)(reporters % groupSize);

            ans += (groups * groupSize);
        }

        return ans;
    }
};