#include <bits/stdc++.h>
using namespace std;

int main() {
	    string s;
	    cin>>s;
	    int a=0,b=0;
	    for(char i:s){
	        if(i=='0'){
	            b=0;
	            a++;
	        }
	        else{
	            a=0;
	            b++;
	        }
	        if(a==7||b==7) {
	            cout<<"YES";
	            return 0;
	        }
	    }
	    cout<<"NO";
	}


