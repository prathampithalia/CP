 int pv(int x){
    if(x==0) return 1;
    return x*(pv(x-1));
}



class Solution {
public:
    string getPermutation(int n, int k) {

    vector<int> v(n);

    iota(v.begin(),v.end(), 1);

    string ans="";
    for (int i = 1; i <= pv(n); i++)
    {


        if (i == k )
        {
       
            for (int i = 0; i < n; i++) {
                string x=to_string(v[i]);
                ans+=x;

            }

            break;
        }
        next_permutation(v.begin(),v.end());
    }


return ans;

    }
};