#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    vector<int> v(7);
	    for(int i=0;i<7;i++){
	        cin>>v[i];
	    }
	    int res=0;
	    int max=*max_element(v.begin(), v.end());
	    for(int i:v){
	        res-=i;
	    }
	    cout<<res+max*2<<endl;
	}

}