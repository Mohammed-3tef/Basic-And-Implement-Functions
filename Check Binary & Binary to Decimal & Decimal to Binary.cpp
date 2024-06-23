#include <iostream>
#include <deque>
#include <cmath>
#include <string>
using namespace std;
#define yes cout <<  "Yes" << endl;         // An abbreviation
#define no cout <<  "No" << endl;           // An abbreviation

void checkBinary(string num)
{
    int count = 0;
    for (int i = 0; i < int(num.size()); i++)            
    {
        if (num[i] == '0' || num[i] == '1'){             // Check every index if it 0 or 1.
            count ++;
        }
    }

    if (count == int(num.size())) {yes}
    else {no}
}

int binaryToDecimal(string num)
{
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

string decimalToBinary(int num){
    string bin = "";

    if (num == 0) {return "0";}
    
    while (num > 0) {
        bin = char('0' + num % 2) + bin;               
        num /= 2;
    }

    return bin;
}

string decimalToAnyBase (int n, int k){
    string res = "";
    
    while (n > 0){
        res += to_string(n%k);
        n /= k;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    string num;             
    cin >> num;
    checkBinary(num);                                 // Check if the number is binary.

    int bin_to_dec = binaryToDecimal(num);           // Convert the binary number into decimal.
    cout << bin_to_dec << endl;

    int num2;             
    cin >> num2;
    string dec_to_bin = decimalToBinary(num2);       // Convert the decimal number into binary.
    cout << dec_to_bin << endl;

    return 0;
}
