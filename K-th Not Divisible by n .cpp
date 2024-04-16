// Link : https://codeforces.com/contest/1352/problem/C
// ================================================================================= //

#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define NO cout << "NO" << endl;
#define YES cout << "YES" << endl;
using namespace std;

int main() {
    ll t;
    cin >> t;
    while(t--){
        ll n1, n2;
        cin >> n1 >> n2;
        ll a = (n2-1) / (n1-1);
        cout << n2+a << endl;
    }
    return 0;
}
