#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;cin>>n;
    if(n==1){
        cout<<1;
        return 0;
    }
    if(n<=3){
        cout<<"NO SOLUTION";
        return 0;
    }
    else{
        std::vector<int>p;
        std::vector<int>m;
        for(int i=1;i<n+1;i++){
            if(i%2==0){
                p.push_back(i);
            }
            else{
                m.push_back(i);
            }
        }
        p.insert(p.end(), m.begin(), m.end());
        for(int i=0;i<p.size();i++){
            cout<<p[i]<<' ';
        }   
    }
    
    return 0;
}
