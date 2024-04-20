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
    ll n = 0;
    cout << "# ===== Welcome to our program to print multiplication table ===== #\n";

    // Get +ve integer.
    while (n > 200 || n < 1){
        cout << "Please enter positive integer <= 200: ";
        cin >> n;
    }
    cout << endl;

    // Print table lines.
    for(int i = 1 ;i <= 12; i++){
        cout << n << " x " << setw(3) << left << i << " =  ";
        cout << left << setw(5) <<  i * n << endl;
    }
    return 0;
}
