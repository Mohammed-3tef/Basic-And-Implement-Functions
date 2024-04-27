#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()                        // Sort The String From The Beginning.
#define r_all(x) (x).rbegin(), (x).rend()                        // Sort The String From The End.
#define from_begin(array, num) sort(array, (array+num))                // Sort the array in ascending order.
#define from_end(array, num) \
        sort((array), (array+num), greater<ll>())      // Sort the array in descending order.
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define Hero \
        ios::sync_with_stdio(0), ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

// Converts the input string to uppercase.
string Upper_case(string txt){
    string res = "";
    for (char i : txt) {
        i = toupper(i);
        res += i;
    }
    return res;
}

// Converts the input string to lowercase.
string Lower_case(string txt) {
    string res = "";
    for (char i: txt) {
        i = tolower(i);
        res += i;
    }
    return res;
}

int main() {
    string txt; cin >> txt;

    cout << Lower_case(txt) << "  " << Upper_case(txt) << endl;
    return 0;
}
