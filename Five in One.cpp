// Link : https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/O
// =========================================================================== //

#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()                        // Sort The String From The Beginning.
#define rall(x) (x).rbegin(), (x).rend()                        // Sort The String From The End.
#define from_begin(array, num) sort(array, (array+num))                // Sort the array in ascending order.
#define from_end(array, num) sort((array), (array+num), greater<ll>())      // Sort the array in descending order.
#define Hero ios::sync_with_stdio(0), ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

void Max(ll arr[], ll n){
    from_end(arr, n);
    ll maximum = arr[0];
    cout << "The maximum number : " << maximum << endl;
}

void Min(ll arr[], ll n){
    from_begin(arr, n);
    ll minimum = arr[0];
    cout << "The minimum number : " << minimum << endl;
}

void Prime(ll arr[], ll n){
    ll count = 0;
    for (int i = 0; i < n; ++i) {
        ll sum = 0;
        if (arr[i] == 2) {count++;}
        else {
            for (int j = 1; j <= arr[i]; j++) {
                if (arr[i] % j == 0) { sum++;}
            }
            if (sum == 2) {count++;}
        }
    }
    cout << "The number of prime numbers : " << count << endl;
}

void Palindrome(ll arr[], ll n){
    ll count = 0;
    for (int i = 0; i < n; ++i) {
        string x1 = to_string(arr[i]), x2 = to_string(arr[i]);
        reverse(all(x2));
        if (x1 == x2){count++;}
    }
    cout << "The number of palindrome numbers : " << count << endl;
}

int divisors(ll n){
    int n_divisors = 0;
    for (int i = 1; i <= n; ++i) {
        if (n %i == 0){n_divisors++;}
    }
    return n_divisors;
}


int main() {
    Hero;
    ll num; cin >> num;
    ll arr[num];
    for (int i = 0; i < num; ++i) {
        cin >> arr[i];
    }
    Max(arr, num);
    Min(arr, num);
    Prime(arr, num);
    Palindrome(arr, num);
  
    ll max_divisor = 0, n = 0;
    for (int i = 0; i < num; ++i) {
        if (divisors(arr[i]) > max_divisor){
            max_divisor = divisors(arr[i]);
            n = arr[i];
        }
        if (divisors(arr[i]) == max_divisor){
            if(arr[i] > n){n = arr[i];}
        }
    }
    cout << "The number that has the maximum number of divisors : " << n << endl;
    return 0;
}
