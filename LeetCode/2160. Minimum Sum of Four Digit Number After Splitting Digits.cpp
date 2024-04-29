class Solution {
public:
    int minimumSum(int num) {
        string k = to_string(num);

        sort(k.begin(), k.end());

        string k1 = "", k2 = "";
        k1 += k[0];
        k1 += k[3];

        k2 += k[1];
        k2 += k[2];

        int n1 = stoi(k1), n2 = stoi(k2);

        return (n1 + n2);

    }
};