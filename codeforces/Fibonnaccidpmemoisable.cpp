    
#include <bits/stdc++.h>
using namespace std;
long long dp[100];
long long fib(int n){
    if(n==0) return 0;
    else if(n==1) return 1;
    else if(dp[n]!=-1) return dp[n];
    dp[n]=fib(n-1)+fib(n-2);
    return dp[n];
}

int main() {
    fill(dp, dp + 100, -1);
    cout<<fib(40)<<endl;
}