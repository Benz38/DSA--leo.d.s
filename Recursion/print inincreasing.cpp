#include <bits/stdc++.h>
using namespace std;

void inc(int n)
{

    if (n == 0)
    {
        return;
    }

    if (n > 0)
    {
        inc(n - 1);
        cout << n << " ";
    }
}
int main()
{
    int n = 9;
    inc(n);

    return 0;
}