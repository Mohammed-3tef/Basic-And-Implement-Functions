// Link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
// ============================================================================= //

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

void printRLE(string s){
    sort(all(s));
    for (int i = 0; s[i] != '\0'; i++)
    {
        // Counting occurrences of s[i]
        ll count = 1;
        while (s[i] == s[i + 1]) {i++, count++;}
        
        cout << s[i] << " : "<< count << endl;
    }
}

int main() {
    Hero;
    string x; cin >> x;
    printRLE(x);
    return 0;
}
