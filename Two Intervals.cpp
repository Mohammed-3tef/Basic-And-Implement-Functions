// Link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X
// =================================================================================== //

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
using namespace std;

int main()
{
    ll l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
 
    if(max(l1,l2) > min(r1,r2))
    cout << "-1";
    else
    cout << max(l1,l2) << " " << min(r1,r2);
    return 0;
}
