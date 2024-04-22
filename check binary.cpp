#include <iostream>
using namespace std;
#define yes cout <<  "Yes" << endl;         // An abbreviation
#define no cout <<  "No" << endl;           // An abbreviation

void check_binary(string num)
{
    int count = 0;
    for (int i = 0; i < int(num.size()); i++)            
    {
        if (num[i] == '0' || num[i] == '1')             // Check every index if it 0 or 1
        {
            count ++;
        }
    }

    if (count == int(num.size())){
        yes
    }
        
    else {
        no
    }
        
}

int main()
{
    string num;             // Get the number to check.
    cin >>num;
    check_binary(num);
    return 0;
}