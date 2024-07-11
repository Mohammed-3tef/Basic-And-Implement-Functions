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

void letterCount(string s) {
    sort(all(s));
    for (int i = 0; s[i] != '\0'; i++) {
        if (isalpha(s[i])) {

            // Counting occurrences of s[i].
            ll count = 1;
            while (s[i] == s[i + 1]) {i++, count++;}

            cout << s[i] << " => "<< count << endl;
        }
    }
}

int wordCount(string st, char sep = ' ') {
    int count = 0;
    bool inWord = false;

    for (int i = 0; i < st.length(); i++) {
        if (st[i] == sep) {
            if (inWord) {
                count++, inWord = false;    // Reset Flag.
            }
        }
        else {
            inWord = true;    // Still In A Word.
        }
    }
    if (inWord) {count++;}
    return count;
}

int LongestWordLength(string str){
    int n = str.length();
    int res = 0, curr_len = 0;

    for (int i = 0; i < n; i++) {
        if (str[i] != ' ') { curr_len++; }
        else {
            res = max(res, curr_len);
            curr_len = 0;
        }
    }
    return max(res, curr_len);
}

int main() {
    Hero;
    string x; getline(cin, x);
    cout << "The number of letters in the sentence in details: " << endl;
    letterCount(x);
    cout << endl << "The number of words in the sentence = " << wordCount(x) << " words." << endl;
    return 0;
}
