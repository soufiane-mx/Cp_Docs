#include <bits/stdc++.h>
using namespace std;

int main() {
	     int t;
	     cin>>t;
	     while(t--){
	         int x;
	         cin>>x;
	         string s = to_string(x);
	         int min=1000;
	         for(char i:s){
	             int j=i-'0';
	             if(j<min){
	                 min=j;
	             }
	         }
	         cout<<min<<endl;
	         
	     }
	}
