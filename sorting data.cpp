#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

void sorting(int num, deque<int>data)
{
    for (int i = 0; i < num; i++)         // Get data.
    {
        int element;
        cin >> element;
        data.push_back(element);
    }

    sort(data.begin(),data.end());      // Sort data.

    for (int i = 0; i < num; i++)         // Print data.
    {
        cout << data[i] << " ";
    }
}



int main()
{
    int num;
    cin >> num;
    deque<int>data;
    sorting(num,data);
    return 0;
}
