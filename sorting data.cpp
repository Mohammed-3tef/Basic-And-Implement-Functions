#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    deque<int>data;
    for (int i = 0; i < n; i++)         // Get data.
    {
        int element;
        cin >> element;
        data.push_back(element);
    }

    sort(data.begin(),data.end());      // Sort data.

    for (int i = 0; i < n; i++)         // Print data.
    {
        cout << data[i] << " ";
    }
}