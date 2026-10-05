#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    vector<int> misplaced;
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	        if(v[i]!=i+1){
	            misplaced.push_back(v[i]);
	        }
	    }
	    if(misplaced.empty()){
	        cout<<"YES"<<endl;
	        continue;
	    }
	    bool ok=true;
	    for(int i=1;i<misplaced.size();i++){
	        if(misplaced[i]>misplaced[i-1]){
	            ok=false;
	            break;
	        }
	    }
	    if(ok){
	        cout<<"YES"<<endl;
	    }
	    else cout<<"NO"<<endl; 
	}

}
