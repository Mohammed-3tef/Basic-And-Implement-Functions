// =========== Count the number of unique characters in a given String =========== \\
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

int cntDistinct(string str)
{
    // Set to store unique characters in the given string.
    unordered_set<char> s;

    // Loop to traverse the string.
    for (int i = 0; i < str.size(); i++)
    {
        // Insert the current character into the set.
        s.insert(str[i]);
    }
    
    return s.size();
}

int main(){
    string e; cin >> e;
    cout << cntDistinct(e) << endl;
    return 0;
}
