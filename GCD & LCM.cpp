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
    ll n1, n2; cin >> n1 >> n2;
    cout << gcd(n1, n2) << " " << lcm(n1, n2) << endl;
    return 0;
}
