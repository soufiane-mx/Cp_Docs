#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;

pair<long long, long long> fib(long long n) {
    if (n == 0)
        return {0, 1};

    auto [a, b] = fib(n / 2);//F[0]=0 et F[0+1]=1

    long long c = a * ((2 * b % MOD - a + MOD) % MOD) % MOD;//a=F(k) et b=F(k+1) avec k=n/2
    long long d = (a * a % MOD + b * b % MOD) % MOD;//F(2k+1)=a*a+b*b

    if (n % 2 == 0)
        return {c, d}; //n=2k
    else
        return {d, (c + d) % MOD}; //n=2k+1
}

int main() {
    long long n;
    cin >> n;

    cout << fib(n).first << '\n';
}
