#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
using namespace std;

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
