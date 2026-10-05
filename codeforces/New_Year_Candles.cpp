#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double a, b;
    cin >> a >> b;
    double cpt = a;

    while ((int)a) {  ///a>=1
        a = a / b;
        cpt += a;
        }

    cout << (int)cpt;
}
