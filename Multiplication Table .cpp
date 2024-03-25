#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n = 0;
    cout << "# ===== Welcome to our program to print multiplication table ===== #\n";

    // Get +ve integer
    while (n > 200 || n < 1){
        cout << "Please enter positive integer <= 200: ";
        cin >> n;
    }
    cout << endl;

    // Print table lines
    for(int i = 1 ;i <= 12; i++){
        cout << n << " x " << setw(3) << left << i << " =  ";
        cout << left << setw(5) <<  i * n << endl;
    }
    return 0;
}
