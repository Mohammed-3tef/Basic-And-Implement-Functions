#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
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
