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
#define each(a, x) for (auto & a: x)
#define pvec(x) for (auto & a: x) { cout << a << " ";}
#define pvec2d(v) for (int i = 0; i < v.size(); i++) {for (int j = 0; j < v[i].size(); j++) {cout << v[i][j] << " ";}cout << endl;}
#define ppair(x) each(i, x) cout << i.first << " " << i.second << endl;

#define ll long long
#define MOD 1000000007
#define test_cases(T) int T; cin >> T; while (T--)
#define vec(v,n,int) vector<int> v(n) ; forr(i,n)cin>>v[i];
#define vec2d(v,n,m,int) vector<vector<int>> v(n,vector<int> (n,0)); forr(i, n)forr(j, n) cin >> v[i][j];

// Check
bool isPrime(ll n) { if (n <= 1)return false;if (n <= 3)return true;if (n % 2 == 0 || n % 3 == 0)return false;for (int i = 5;i * i <= n;i += 6)if (n % i == 0 || n % (i + 2) == 0)return false;return true; }
bool isPowerOfTwo(int x) { return x && !(x & (x - 1)); }
bool isPerfectSquare(ll x) { if (x >= 0) { ll sr = sqrt(x);return(sr * sr == x); }return false; }

// Primes
vector<ll>primes;vector<bool>is_prime;
void Sieve(int n) { is_prime.assign(n + 1, true);is_prime[0] = is_prime[1] = false;for (ll i = 2;i * i <= n;i++)if (is_prime[i])for (ll j = i * i;j <= n;j += i)is_prime[j] = false; }
void get_primes(int n) { for (int i = 2;i <= n;i++)if (is_prime[i])primes.push_back(i); }

ll mod_add(ll a, ll b, ll m) { a = a % m;b = b % m;return(((a + b) % m) + m) % m; }
ll mod_sub(ll a, ll b, ll m) { a = a % m;b = b % m;return(((a - b) % m) + m) % m; }
ll gcd(ll a, ll b) { if (b == 0)return a;return gcd(b, a % b); }
ll lcm(ll a, ll b) { return(a / gcd(a, b) * b); }
long long binpow(long long a, long long b, long long m) { a %= m;long long res = 1;while (b > 0) { if (b & 1)res = res * a % m;a = a * a % m;b >>= 1; }return res; }

#define int ll


signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    test_cases(U) {
        int x; cin >> x;
        int a = -1, b = -1;
        for (int i = x; ; i++) {
            if (isPrime(i)) {
                if (a == -1)a = i;
                else b = i;
            }
            if (b != -1)break;
        }

        cout << a * b << endl;
    }


}