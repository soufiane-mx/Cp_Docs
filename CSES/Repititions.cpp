#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int mx=1;
    int cpt=1;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            cpt++;
        }
        else{
            cpt=1;
        }
        mx=max(mx,cpt);
    }
    cout<<mx;
    
    return 0;
}
