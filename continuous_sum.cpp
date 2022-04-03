#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using ll = long long;
const int maxn = 2E6;
ll sum[maxn];//前缀和是一个很大的数
ll a[maxn];
ll n;
//还不是非常懂，可以去leetcode上做一下同样的题
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		a[i] = i;
	}
	for (int i = 1; i <= n; i++) {
		sum[i] = sum[i - 1] + a[i];
	}
	for (int i = 1; i <= n; i++) {
		ll k = sum[i - 1] + n;//sum[j]-sum[i-1]=n;
		int j = lower_bound(sum, sum + n - 1, k) - sum;//寻找等于sum[j]的前缀和返回下标
		if (sum[j] == k) cout << i << " " << j << endl;

	}
	return 0;
}
