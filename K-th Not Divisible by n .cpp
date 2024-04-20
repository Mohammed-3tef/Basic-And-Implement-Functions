// Link : https://codeforces.com/contest/1352/problem/C
// ================================================================================= //

#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()                        // Sort The String From The Beginning.
#define rall(x) (x).rbegin(), (x).rend()                        // Sort The String From The End.
#define from_begin(array, num) sort(array, (array+num))                // Sort the array in ascending order.
#define from_end(array, num) sort((array), (array+num), greater<ll>())      // Sort the array in descending order.
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define Hero ios::sync_with_stdio(0), ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
const ll MAX_CHAR = 256;
using namespace std;

int main() {
    ll t; cin >> t;
    while(t--){
        ll n1, n2;
        cin >> n1 >> n2;
        ll a = (n2-1) / (n1-1);
        cout << n2+a << endl;
    }
    return 0;
}
