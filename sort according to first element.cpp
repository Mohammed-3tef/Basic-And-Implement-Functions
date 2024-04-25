#include <iostream>
#include <algorithm>
#include <deque>
#include <cmath>
#include <string>
using namespace std;
#define yes cout <<  "Yes" << endl;         // An abbreviation
#define no cout <<  "No" << endl;           // An abbreviation

bool compare (pair<int,int> &a,pair<int,int> &b)        
{
    if (a.first == b.first)
        return a.second < b.second;
    else 
        return a.first < b.first;
}

int main()
{
    int num;                            // Number of pairs.
    cin >> num;
    deque<pair<int,int>>coordinate;

    for (int i = 0; i < num; i++)
    {
        int x , y;
        cin >> x >> y;
        coordinate.emplace_back(x , y);         // Store pairs.
    }

    sort(coordinate.begin(),coordinate.end(),compare);          // For sorting according to x from the smallest.

    for (int i = 0; i < num; i++)
    {
        cout << coordinate[i].first << " " << coordinate[i].second << endl;
    }

    return 0;
}