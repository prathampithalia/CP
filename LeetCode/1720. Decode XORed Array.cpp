class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {

        int n = encoded.size() + 1;

        vector<int> arr(n);
        arr[0] = first;
        for (int i = 0; i < n - 1; i++) {
            arr[i + 1] = arr[i] ^ encoded[i];
        }

        return arr;
    }
};