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

// ================>>> These Functions For Vectors ....

void permuteRecVector(vector<int>& nums, int currentIndex, vector<vector<int>>& result) {
    if (currentIndex == nums.size() - 1) {
        result.push_back(nums);
        return;
    }

    for (int index = currentIndex; index < nums.size(); index++) {
        swap(nums[currentIndex], nums[index]);
        permuteRecVector(nums, currentIndex + 1, result);
        swap(nums[currentIndex], nums[index]);
    }
}

vector<vector<int>> permuteVector(vector<int>& nums) {
    vector<vector<int>> result;
    permuteRecVector(nums, 0, result);
    return result;
}

// ================>>> Main Function ....

int main() {
    Hero
    vector<int> a = {1,2,3,4};
    vector<vector<int>> res = permuteVector(a);
    for (int i = 0; i < res.size(); ++i) {
        for (int j = 0; j < res[i].size(); ++j) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
