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

int main(){
    ll n;
    cout << "Please input a positive integer to see if prime: ";
    cin >> n;

    while (n < 0) {
        cout << "Please input a positive integer to see if prime: ";
        cin >> n;
    }
    cout << endl;

    // Cases 0 and 1 are not prime
    if (n == 0 || n == 1) {
        cout << "It's not a prime number.\n";
        return 0;
    }
    else if (n == 2) {
        cout << "It's a prime number.\n";
        return 0;
    } 
    else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                cout << "It's not a prime number.\n";
                return 0;
            }
        }
        cout << "It's a prime number.\n";
    }
    return 0;
}
