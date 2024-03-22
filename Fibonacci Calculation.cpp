// Purpose: Fibonacci calculation with recursion

#include<iostream>
#include<iomanip>

using namespace std;

long long fib2(int n, long long current,
                      long long next)
{
    if (n == 1)
       return next;
    else {
       return fib2 (n - 1, next, next +  current);
    }
}

long long fib(int n)
{
    return fib2 (n, 0, 1);
}

int main ()
{
    long long n;
    cout << "Pls enter number of Fibonacci items you want: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << setw(3) << i << "- " << fib(i) << endl;
    }
    return 0;
}
