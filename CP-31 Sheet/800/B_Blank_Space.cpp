#include<iostream>
#include<vector>

using namespace std;

#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

#define test_cases(T) int T; cin >> T; while (T--)





signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    test_cases(Y) {
        int n ; cin>>n;
        vector<int> v(n);
        for(int i =0 ;i<n ; i++){
            cin>>v[i];
        }
        int A = 0 , cnt = 0;
        for(int i = 0 ;i<n ; i++){
            if(v[i]==0){
                cnt++;
            }
            else{
                A = max(A,cnt);
                cnt = 0 ;
            }
        }
        A= max(A,cnt);
        cout << A << endl;
    }


}