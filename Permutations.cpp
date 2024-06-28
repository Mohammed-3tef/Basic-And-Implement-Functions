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

// ==================>>> These Function are specific to Vectors ....
// =========>>> You can use this function with any another datatype.

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

// =========>>> Next Permutation of a vector of integers.

vector<int> nextPermutation(vector<int>& nums) {
    int k = -1;
    int l = 0;
    vector<int> res;

    for (int i = nums.size() - 2; i >= 0; --i) {
        if (nums[i] < nums[i + 1]) {
            k = i;
            break;
        }
    }

    if (k == -1) {reverse(nums.begin(), nums.end());} 
    else {
        for (int i = nums.size() - 1; i > k; --i) {
            if (nums[i] > nums[k]) {
                l = i;
                break;
            }
        }

        swap(nums[k], nums[l]);
        reverse(nums.begin() + k +1, nums.end());
    }

    for (int j = 0; j < nums.size(); ++j) {res.push_back(nums[j]);}
    return res;
}

// ==================>>> Main Function ....

int main() {
    Hero
    vector<int> a = {1,2,3};
    vector<vector<int>> res1 = permuteVector(a);
    vector<int> res2 = nextPermutation(a);
    for (int i = 0; i < res1.size(); ++i) {
        for (int j = 0; j < res1[i].size(); ++j) {
            cout << res1[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "=====================" << endl;
    
    for (int j = 0; j < res2.size(); ++j) {
        cout << res2[j] << " ";
    }
    return 0;
}
