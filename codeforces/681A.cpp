#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
	cin>>t;
	while(t--){
	   int n,a1,a2,a3;
	   cin>>n;
	   cin>>a1>>a2>>a3;
	   int m=min({a1,a2,a3});
	   cout<<n-m<<endl;
	}

}