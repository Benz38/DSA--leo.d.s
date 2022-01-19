#include <bits/stdc++.h>
using namespace std;

int fac(int n)
{
    if (n > 1)
    {
        return n * fac(n - 1);
    }
    else
        return 1;
}

int main()
{
    int n;
    cout << "enter value of n :" << endl;
    cin >> n;
    cout << fac(n);

    return 0;
}
