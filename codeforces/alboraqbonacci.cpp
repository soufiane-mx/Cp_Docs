
#include <bits/stdc++.h>
using namespace std;


using ll = long long;
const ll MOD = 1000000007;

int main() {
    int t;cin>>t;
    while(t--){
        long long a,b,n;
        long long ans;
        cin>>a>>b>>n;
        a %= MOD;
        b %= MOD;
        int r=n%6;
        if(r==0) ans=a;
        else if (r==1) ans=b;
        else if(r==2) ans=(b-a+MOD)%MOD;
        else if(r==3) ans=(MOD-a)%MOD;
        else if (r == 4) ans = (MOD - b) % MOD;
        else ans = (a - b + MOD) % MOD;
        cout<<ans<<endl;
        
    }
    
    return 0;
}
