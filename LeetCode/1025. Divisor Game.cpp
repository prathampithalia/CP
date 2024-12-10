class Solution {
public:
    bool divisorGame(int n) {

bool ok = true;
int alice = 0;
int ans = 1;
while (ok) {
    int mx = -1;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) mx = max(mx, i);
    }
    // cout << n<<' '<< mx <<" "<<alice<< endl;
    if (mx == -1) {
        if (alice % 2) ok = false;
        else {
            ans = 0;
            ok = false;
        }
    }
    else {
        n = n - mx;
    }
    alice++;
}
return ans ;
    }
};

// Correct sol--------------------------------
class Solution {
public:
    bool divisorGame(int n) {

        return !(n & 1);
    }
};