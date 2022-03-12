#include <bits/stdc++.h>
using namespace std;

// 0 1 1 2 3 5

int fib(int x, unsigned int n)
{
    int temp = 1;

    if (n == 0)
        return 0;

    temp = fib(x, n / 2);

    if ((n % 2) == 0)
    {
        return (temp * temp);
    }
    else
        return (x * temp * temp);
}

int main()
{
    int n;
    cin >> n;

    int res = fib(0, n);

    cout << res << endl;

    return 0;
}