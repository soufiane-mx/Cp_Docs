#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int n;cin>>n;
	int x;
	int a=0;
	for (int i=0;i<n;i++){
	    cin>>x;
	    a^=x;
	}
	cout<<a;

}
