class Solution {
public:
    double findSmallestMaxDist(vector<int>& arr, int k) {

        priority_queue<pair<long double, int>> pq;
        int n = arr.size();

        vector<int> elem(n - 1);

        for (int i = 0; i < n - 1; i++) {
            pq.push({ arr[i + 1] - arr[i] , i });
        }

        for (int gasStations = 1; gasStations <= k; gasStations++) {

            long double iniDiff = pq.top().first;
            int index = pq.top().second;

            pq.pop();
            elem[index]++;
            long double Diff = (long double)(arr[index + 1] - arr[index]);
            long double afterDiff = Diff / (long double)(elem[index] + 1);

            pq.push({ afterDiff , index });
        }

        return pq.top().first;

    }
};