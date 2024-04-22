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

int main() {
    Hero
    ll test = 1;
//    cin >> test;
    while(test--){
        ll num; cin >> num;
        ll arr[num];
        
        for (int i = 0; i < num; ++i) {
            arr[i] = i+1;
            if (arr[i] == 2) {cout << arr[i] << " ";}
            else {
                ll sum = 0;
                for (int j = 1; j <= arr[i]; j++) {
                    if (arr[i] % j == 0) {sum++;}
                }
                if (sum == 2) {cout << arr[i] << " ";}
            }
        }
        
    }
    return 0;
}
