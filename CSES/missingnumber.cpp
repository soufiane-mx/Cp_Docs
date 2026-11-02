#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> v(n-1);
    int so=0;
    for(int i=0;i<n-1;i++){
        cin>>v[i];
        so+=v[i];
    }
    int s=(n*(n+1))/2;
    cout<<s-so<<endl;
    return 0;
}
