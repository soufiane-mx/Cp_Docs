#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;cin>>n;
    std::vector<long long>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long cpt=0;
    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]){
            cpt+=v[i-1]-v[i];
            v[i]=v[i-1];
        }
    }
    cout<<cpt;
    return 0;
}
