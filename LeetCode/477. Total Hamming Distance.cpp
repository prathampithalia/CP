class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
vector<int> b(31);

int x = 0, n = nums.size();

for (int i = 0;i < n; i++) {
	for (int j = 0; j < 31;j++) {
		b[j] += (bool)(nums[i] & (1 << j));
	}
}

for (int i = 0;i < 31; i++) {
	if (b[i]) {
		int k = n - b[i];
		if (k == 1) x += b[i];
		else if (b[i] == 1) x += n - b[i];
		else
			x += (k * b[i]);
	}
}

return x ;
    }
};