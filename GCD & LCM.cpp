#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define NO cout << "NO" << endl;
#define YES cout << "YES" << endl;
using namespace std;

// Recursive function to return gcd of a and b.
long long gcd(long long int a, long long int b){
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to return LCM of two numbers.
long long lcm(ll a, ll b){
    return (a / gcd(a, b)) * b;
}

int main() {
    ll n1, n2;
    cin >> n1 >> n2;
    cout << gcd(n1, n2) << " " << lcm(n1, n2) << endl;
    return 0;
}
