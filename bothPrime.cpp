#include<bits/stdc++.h>
using namespace std;
const int maxn = 1E6;
int dp[maxn];

int main()
{
    int n;
    cin >> n;
    memset(dp, 1, sizeof(dp));
    dp[0] = 0; dp[1] = 0;
    for (int i = 2; i * i < maxn; i++) {
        if (dp[i]) {
            for (int j = i * i; j <= maxn; j += i)
                dp[j] = 0;
        }
    }


    int cnt = 0;
    for (int i = 2; i < n; i++) {
        if (dp[i] && dp[i + 1])cnt++;
        if (dp[i] && dp[i + 2])cnt++;
    }
    cout << cnt << endl;
    return 0;
}