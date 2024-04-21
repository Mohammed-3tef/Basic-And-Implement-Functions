// Link : https://codeforces.com/contest/1957/problem/A
// ====================================================================== //
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

int main() {
    Hero 
    ll test; cin >> test; 
    while (test--){ 
        ll num; cin >> num; 
        ll arr[num], sum = 0, count = 1; 
        deque <ll> res;                   // Declares a deque to store counts of each unique number.
        for (int i = 0; i < num; ++i) {cin >> arr[i];} 

        from_begin(arr, num);             // Sorts the array in ascending order.

        // Counts the frequency of each unique number and stores it in 'res'.
        for (int i = 0; i < num-1; ++i){
            if (arr[i] == arr[i+1]){count++;}
            else {
                res.push_back(count);
                count = 1;}
        }
        res.push_back(count);             // Pushes the last count.

        // Calculates the sum of the floor division of each count by 3.
        for (int i = 0; i < res.size(); ++i) {
            sum += res[i]/3;
        }
        cout << sum << endl; 
    }
    return 0; 
}
