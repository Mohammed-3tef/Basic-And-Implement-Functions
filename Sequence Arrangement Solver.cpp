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
    int n;
    cin >> n;
    vector<int> arr(n), position(n, 0);
    int x = 0;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] != -1) {position[arr[i] - 1] = i + 1;} 
        else {x = i + 1;}
    }

    cout << x << " ";
    while (position[x - 1] != 0) {
        cout << position[x - 1] << " ";
        x = position[x - 1];
    }

    cout << endl;
    return 0;
}
