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

void Max(ll arr[], ll n){
    ll maximum = arr[0];
    for (int i = 1; i < n; ++i) {
        if (maximum <= arr[i]){maximum = arr[i];}
    }
    cout << "The maximum number : " << maximum << endl;
}

void Min(ll arr[], ll n){
    ll minimum = arr[0];
    for (int i = 1; i < n; ++i) {
        if (minimum >= arr[i]){minimum = arr[i];}
    }
    cout << minimum << endl;
}

void prime(ll arr[], ll n){
    ll count = 0, sum = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 2) {count++;}
        else {
            for (int i = 1; i <= sqrt(arr[i]); i++) {
                if (arr[i] % i == 0) { sum++;}
            }
            if (sum == 2) {count++;}
        }
    }
    cout << "The number of prime numbers : " << count << endl;
}

void palindrome(ll arr[], ll n){
    ll count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < 10 || arr[i] %11 == 0){count++;}
    }
    cout << "The number of palindrome numbers : " << count << endl;
}

void divisors(ll arr[], ll n){
    ll div[n];
    for (int i = 0; i < n; ++i) {
        ll count = 0;
        for (int j = 1; j < arr[i]; ++j) {
            if (arr[i] %j == 0) {count++;}
        }
        div[i] = count;
    }
    ll maximum = div[0];
    for (int i = 1; i < n; ++i) {
        if (maximum <= div[i]){maximum = div[i];}
    }
    for (int i = 1; i < n; ++i) {
        if (maximum == div[i]){
            cout << "The number that has the maximum number of divisors : " << arr[i] << endl;
            break;
        }
    }
}

int cntDistinct(string str)
{
    // Set to store unique characters in the given string.
    unordered_set<char> s;

    // Loop to traverse the string.
    for (int i = 0; i < str.size(); i++)
    {
        str[i] = tolower(str[i]);
        s.insert(str[i]);
    }

    return s.size();
}

int fun(ll n){
    if (n == 0){return 0;}
    return n * fun(--n) ;
}

char mostFrequent(string text)
{
    int max = 0;
    int count = 0;
    char maxCharcter;
    for(char q = ' ' ; q<= '~' ;q++){
        count = 0;
        for(int i = 0; i < text.length() ;i++){
            if(text[i]==q)
                count++;
        }

        if(count > max){
            max = count;
            maxCharcter = q;
        }
    }

    return maxCharcter;
}

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
    
    return 0;
}
