
#include <bits/stdc++.h>
using namespace std;

//probleme si n=10**18 cets linfini du temps
//sol =Fats Doubling on divise n

int main() {
    int n;
    cin >> n;

    long long dp[100];
    const long long MOD = 1000000007;
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        // Complete cette ligne
        dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
    }

    cout << dp[n] << endl;
    return 0;
}
