// Link : https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D
// ========================================================================================= //

#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define NO cout << "NO" << endl;
#define YES cout << "YES" << endl;
using namespace std;

int main() {
    ll test;
    cin >> test;
    while (test--){
        ll t, tt, sum = 0;
        cin >> t >> tt;
        if (t > tt) {swap(t, tt);}
        cout << ((tt - t +1)*(t + tt)) /2 << endl;
    }
    return 0;
}
