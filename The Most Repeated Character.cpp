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

char mostFrequent(string text)
{
    int max = 0;
    int count = 0;
    char maxCharcter;
    for(char q = ' '; q <= '~'; q++){
        count = 0;
        for(int i = 0; i < text.length() ;i++){
            if(text[i] == q){count++;}
        }

        if(count > max){
            max = count;
            maxCharcter = q;
        }
    }

    return maxCharcter;
}

int main() {
    ll test;
//    cin >> test;
    test = 1;
    while(test--){
        string txt;
        cin >> txt;
        cout << mostFrequent(txt) << endl;
    }
    return 0;
}
