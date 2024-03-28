/*
  https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X
*/

#include <bits/stdc++.h>
#define ll long long
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
