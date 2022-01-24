#include <bits/stdc++.h>
using namespace std;

void dec(int n)
{
    if (n == 0)
    {
        return;
    }

    if (n > 0)
    {
        cout << n << " ";
        dec(n - 1);
    }
}

int main()
{
    int n = 9;
    dec(n);

    return 0;
}