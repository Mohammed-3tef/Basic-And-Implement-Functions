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
void operator<<(ostream& out, vector<string>& arr){
    for(auto i : arr){
        cout << i << " ";
    }
    cout << endl;
}

// ==================>>> These Function are specific to Vectors ....
// =========>>> You can use this function with any another datatype.

void calcSubset(vector<int>& A, vector<vector<int> >& res, vector<int>& subset, int index) {
    res.push_back(subset);
    for (int i = index; i < A.size(); i++) {
        subset.push_back(A[i]);
        calcSubset(A, res, subset, i + 1);
        subset.pop_back();
    }
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<int> subset;
    vector<vector<int> > res;
    int index = 0;
    calcSubset(nums, res, subset, index);
    return res;
}

// ==================>>> Main Function ....

int main() {
    Hero
    vector<int> a = {1, 2, 3};
    vector<vector<int>> res1 = subsets(a);
    for (int i = 0; i < res1.size(); ++i) {
        for (int j = 0; j < res1[i].size(); ++j) {
            cout << res1[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
