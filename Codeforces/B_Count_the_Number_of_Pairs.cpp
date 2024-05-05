#include<bits/stdc++.h>

using namespace std;

#define all(a) a.begin(), a.end()
#define fi first
#define se second
#define pb push_back
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl
#define ce cout << endl
#define forr(i, n) for (int i = 0; i < n; i++)
#define pvec(x) for (auto & a: x) { cout << a << " ";}
#define pvec2d(v) for (int i = 0; i < v.size(); i++) {for (int j = 0; j < v[i].size(); j++) {cout << v[i][j] << " ";}cout << endl;}

#define each(a, x) for (auto & a: x)
#define ppair(x) each(i, x) cout << i.first << " " << i.second << endl;

#define ll long long
#define MOD 1000000007
#define test_cases(T) int T; cin >> T; while (T--)

//Check
bool isPrime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0) return false;
    return true;
}
bool isPowerOfTwo(int x) {
    return x && !(x & (x - 1));
}
bool isPerfectSquare(ll x) {
    if (x >= 0) {
        ll sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}

//Constants
vector < ll > primes;
vector < bool > is_prime;

// Mathematical functions
void Sieve(int n) {
    is_prime.assign(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i * i <= n; i++)
        if (is_prime[i])
            for (ll j = i * i; j <= n; j += i) is_prime[j] = false;
}
void get_primes(int n) {
    for (int i = 2; i <= n; i++)
        if (is_prime[i]) primes.push_back(i);
}
ll mod_add(ll a, ll b, ll m) {
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}
ll mod_sub(ll a, ll b, ll m) {
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}
ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
} //__gcd 
ll lcm(ll a, ll b) {
    return (a / gcd(a, b) * b);
}
ll moduloMultiplication(ll a, ll b, ll mod) {
    ll res = 0;
    a %= mod;
    while (b) {
        if (b & 1) res = (res + a) % mod;
        b >>= 1;
    }
    return res;
}
ll powermod(ll x, ll y, ll p) {
    ll res = 1;
    x = x % p;
    if (x == 0) return 0;
    while (y > 0) {
        if (y & 1) res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

ll modinv(ll p, ll q) {
    ll ex;
    ex = MOD - 2;
    while (ex) {
        if (ex & 1) {
            p = (p * q) % MOD;
        }
        q = (q * q) % MOD;
        ex >>= 1;
    }
    return p;
}



#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...):
#endif





signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    test_cases(U) {
        int n, k; cin >> n >> k;
        string s; cin >> s;

        vector<int>  lo(26), up(26);

        forr(i, n) {
            if (islower(s[i]))lo[s[i] - 'a']++;
            else up[s[i] - 'A']++;
        }

        //  forming possible pairs without op

        int  c = 0;
        forr(i, 26) {
            int p = 0;
            if (lo[i] >= 0 && up[i] >= 0) p = min(lo[i], up[i]);
            c += p;
            lo[i] -= p;
            up[i] -= p;
        }
        // performing op on those whose loi or upi is >=2 
        vector<int> t;
        forr(i, 26) {
            if (lo[i] > 1)t.push_back(lo[i] / 2);
            if (up[i] > 1)t.push_back(up[i] / 2);
        }

        sort(all(t));
        int cc = 0;
        forr(i, t.size()) {
            if (t[i] <= k) {
                cc += t[i];
                k -= t[i];
            }
            else {
                cc += (k);
                k = 0;
                break;
            }
        }


        cout << c + cc << endl;

    }


}