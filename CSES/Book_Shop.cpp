
#include <iostream>
using namespace std;

int Knapsack(int wt[], int val[], int W, int n)
{
	int t[n + 1][W + 1];

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= W; j++)
		{
			if (i == 0 || j == 0) 	t[i][j] = 0;
			else if (wt[i - 1] <= j)
			{

				int val1 = val[i - 1] + t[i - 1][j - wt[i - 1]]; 

				int val2 = t[i - 1][j];							 
				t[i][j] = max(val1, val2);
			}
			else if (wt[i - 1] > j)	   
				t[i][j] = t[i - 1][j]; 
		}
	}

	return t[n][W];
}

int main() {
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif 
	int n; cin >> n; 
	int W; cin >> W; 
	int val[n], wt[n]; 
	for (int i = 0; i < n; i++)
		cin >> wt[i];
	for (int i = 0; i < n; i++)
		cin >> val[i];

	cout << Knapsack(wt, val, W, n) << endl;
	return 0;
}

