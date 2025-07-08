class Solution {
public:
    int maximumGroups(vector<int>& grades) {

        sort(grades.begin(), grades.end());

        int prevCount = 0, curCount = 0;
        int curSum = 0, prevSum = 0;

        int groups = 0;

        for (auto i : grades) {
            curSum += i;
            curCount++;

            if (curSum > prevSum && curCount > prevCount) {
                groups++;

                prevSum = curSum;
                prevCount = curCount;
                curSum = 0;
                curCount = 0;
            }
        }

        return groups;

    }
};