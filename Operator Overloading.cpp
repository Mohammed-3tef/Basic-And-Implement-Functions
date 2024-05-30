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
        ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;

// This function repeats the string a (n) of times.
string operator*(int n, string str){
    int sz = str.size();
    for (int i = 0; i < n/2; ++i) {
        str += " " + str;
    }
    if (n %2 != 0 && n != 1){str += " " + str.substr(0, sz);}
    return str;
}

// You can use this function with any another datatype.
// This function prints the vector's elements.
void operator<<(ostream& out, vector<int>& arr){
    for(auto i : arr){
        cout << i << " ";
    }
    cout << endl;
}

// ======================================>> Main Function <<====================================== // 

int main() {
    Hero
    vector <int> vec(5);
    for (int i = 0; i < 5; ++i) {
        cin >> vec[i];
    }
    
    string s = "Hello";
    cout << 4*5 << endl;
    cout << 4*s << endl;
    cout << vec;

    return 0;
}
