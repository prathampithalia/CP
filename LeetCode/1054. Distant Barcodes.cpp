class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        unordered_map<int, int> mp;
        for (auto i : barcodes)
            mp[i]++;
        priority_queue<pair<int, int>> pq;

        for (auto i : mp) {
            pq.push({ i.second, i.first });
        }

        int n = barcodes.size();
        vector<int> v;

        while (pq.size()) {
            int k = pq.top().first;
            int elem = pq.top().second;

            for (int i = 0; i < k; i++)
                v.push_back(elem);
            pq.pop();
        }

        int l = 0, r = n - 1;
        vector<int> a(n);

        int ind = 0;
        while (l <= r) {
            a[ind] = v[l];
            if (ind + 1 < n)a[ind + 1] = v[r];
            l++;
            r--;
            ind += 2;
        }
        ind = -1;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] == a[i + 1]) {
                ind = i + 1;
                break;
            }
        }

        if (ind == -1)return a;

        int j = 0;
        for (int i = ind; i < n; i += 2) {
            swap(a[i], a[j]);
            j += 2;
        }
        return a;
    }
};