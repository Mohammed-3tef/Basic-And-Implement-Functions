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

void checkBinary(string num){
    int count = 0;
    for (int i = 0; i < int(num.size()); i++) {
        if (num[i] == '0' || num[i] == '1'){count ++;}              // Check every index if it 0 or 1.
    }

    if (count == int(num.size())) {yes}
    else {no}
}

int binaryToDecimal(string num) {
    int dec = 0;
    deque<char>bit;
    for (int i = 0; i < int(num.size()); i++){
        bit.push_front(num[i]);                          // Put every index in an array but reversed.
    }
    
    for (int i = 0; i < int(bit.size()); i++){
        dec += static_cast<int>(bit[i]-'0') * pow(2,i);  // Evaluate the value of every index. 
    }
    
    return dec;
}

string decimalToBinary(int num) {
    string bin = "";
    if (num == 0) {return "0";}
    
    while (num > 0) {
        bin = char('0' + num % 2) + bin;               
        num /= 2;
    }

    return bin;
}

string addBinary(string A, string B) {
    if (A.length() > B.length()) {return addBinary(B, A);}

    int diff = B.length() - A.length();
    string padding;
    for (int i = 0; i < diff; i++) {padding.push_back('0');}

    A = padding + A;
    string res;
    char carry = '0';

    for (int i = A.length() -1; i >= 0; i--) {
        
        if (A[i] == '1' && B[i] == '1') {
            if (carry == '1') {res.push_back('1'), carry = '1';}
            else {res.push_back('0'), carry = '1';}
        }
        
        else if (A[i] == '0' && B[i] == '0') {
            if (carry == '1') {res.push_back('1'), carry = '0';}
            else {res.push_back('0'), carry = '0';}
        }
        
        else if (A[i] != B[i]) {
            if (carry == '1') {res.push_back('0'), carry = '1';}
            else {res.push_back('1'), carry = '0';}
        }
    }

    if (carry == '1') {res.push_back(carry);}
    reverse(res.begin(), res.end());

    int index = 0;
    while (index + 1 < res.length() && res[index] == '0') {index++;}
    return (res.substr(index));
}

string decimalToAnyBase (int n, int k) {
    string res = "";
    while (n > 0){
        res += to_string(n%k);
        n /= k;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    Hero
    string num;             
    cin >> num;
    checkBinary(num);                                 // Check if the number is binary.

    int bin_to_dec = binaryToDecimal(num);           // Convert the binary number into decimal.
    cout << bin_to_dec << endl;

    int num2;             
    cin >> num2;
    string dec_to_bin = decimalToBinary(num2);       // Convert the decimal number into binary.
    cout << dec_to_bin << endl;

    cout << addBinary("101", "111") << endl;       // Add two binary numbers.
    cout << decimalToAnyBase(55, 7) << endl;       //  Convert the decimal number into any base.
    return 0;
}
