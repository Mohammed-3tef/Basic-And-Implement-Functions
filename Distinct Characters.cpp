// =========== Count the number of unique characters in a given String =========== \\
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
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
    string e;
    cin >> e;
    cout << cntDistinct(e) << endl;
    return 0;
}
