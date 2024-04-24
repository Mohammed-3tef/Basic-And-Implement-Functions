#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()                 // Sort The String From The Beginning.
#define r_all(x) (x).rbegin(), (x).rend()              // Sort The String From The End.
#define from_begin(array, num) \
        sort(array, (array+num))                      // Sort the array in ascending order.
#define from_end(array, num) \
        sort((array), (array+num), greater<ll>())     // Sort the array in descending order.
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define Hero \
        ios::sync_with_stdio(0), ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

// Function to add elements in a vector.
long long Sum_elements_vec(vector<long long>v){
    return accumulate(v.begin(), v.end(), 0);
}

// Function to multiply elements in a vector.
long long Multiply_elements_vec(vector<long long>v){
    long long initialProduct = 1;
    return accumulate(v.begin(), v.end(), initialProduct, multiplies<long long>());
}

// Function to merge the two vectors and sort it.
vector<long long> Merge_vec(vector<long long>v1, vector<long long>v2){
    vector<long long> merged(v1.size() + v2.size());
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), merged.begin());
    return merged;
}

// Function to add the two vectors.
vector<long long> Add_vec(vector<long long>v1, vector<long long>v2){

    // Check if the vectors have the same size.
    if (v1.size() != v2.size()){
        cout << "Error: Vectors must have the same size to add them." << endl;
        return {};
    }
    vector<long long> result(v1.size());

    // Add the elements of vec1 and vec2 and store the result in result.
    for (int i = 0; i < v1.size(); i++) {result[i] = v1[i] + v2[i];}
    return result;
}

// Function to subtrct the two vectors.
vector<long long> Sub_vec(vector<long long>v1, vector<long long>v2){

    // Check if the vectors have the same size.
    if (v1.size() != v2.size()){
        cout << "Error: Vectors must have the same size to subtract them." << endl;
        return {};
    }

    vector<long long> result(v1.size());

    // Subtract the elements of vec1 and vec2 and store the result in result.
    for (int i = 0; i < v1.size(); i++) {result[i] = v1[i] - v2[i];}
    return result;
}

int main()
{
    Hero
    ll num; cin >> num;
    vector <ll> arr1(num);
    vector <ll> arr2(num);

    for (int i = 0; i < num; ++i) {cin >> arr1[i];}
    for (int i = 0; i < num; ++i) {cin >> arr2[i];}

    // Create vectors to store the result.
    vector<ll> arr3 = Merge_vec(arr1, arr2);                  // Merge the two vectors and sort it.
    vector<ll> arr4 = Add_vec(arr1, arr2);                  // Add the two vectors.
    vector<ll> arr5 = Sub_vec(arr1, arr2);                  // Subtract the two vectors.

    // Print the results.
    cout << "The summation of vector elements = " << Sum_elements_vec(arr3);          // Adding elements in a vector.
    cout << endl;
    cout << "The product of vector elements = " << Multiply_elements_vec(arr3);       // Multiplying elements in a vector.

    cout << endl << "The result of merging the two vectors is: [";
    for (int i = 0; i < arr1.size() + arr2.size(); ++i) {
        cout << arr3[i];
        if (i != arr3.size() - 1) {cout << ", ";}
    }
    cout << "]";

    cout << endl << "The result of adding the two vectors is: [";
    for (int i = 0; i < num; ++i) {
        cout << arr4[i];
        if (i != arr4.size() - 1) {cout << ", ";}
    }
    cout << "]";

    cout << endl << "The result of subtracting the two vectors is: [";
    for (int i = 0; i < num; ++i) {
        cout << arr5[i];
        if (i != arr5.size() - 1) {cout << ", ";}
    }
    cout << "]";

    return 0;
}
