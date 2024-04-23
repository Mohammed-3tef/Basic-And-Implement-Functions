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

int cntDistinct(string str)            // This function is specific to strings.
{
    // Set to store unique characters in the given string.
    unordered_set<char> s;

    // Loop to traverse the string.
    for (int i = 0; i < str.size(); i++){
        // Insert the current character into the set.
        s.insert(str[i]);
    }
    
    return s.size();
}

int countDistinct(int arr[], int n)             // This function is specific to arrays of integers.
{
    set<int> uniqueElements;
    for (int i = 0; i < n; ++i) {
        uniqueElements.insert(arr[i]);
    }
    return uniqueElements.size();
}

long long getIndex(vector<ll> v, ll K)          // Function to print the index of an element in array of integers.
{
    auto it = find(v.begin(), v.end(), K);

    // If an element was found.
    if (it != v.end()){

        // Calculating the index of K.
        ll index = it - v.begin();
        return index;
    }
    else {
        // If the element is not present in the vector.
        return -1;
    }
}

int main(){
    string e; cin >> e;
    cout << "Number of distinct values: " << cntDistinct(e) << endl;

    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {cin >> arr[i];}
    cout << "Number of distinct values: " << countDistinct(arr, n) << endl;

    ll k; cin >> k;
    cout << "The index of an element : "<< getIndex(arr, k) << endl;
    return 0;
}
