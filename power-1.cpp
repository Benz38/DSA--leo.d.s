#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll power(ll a, ll int b)
{

    ll res;

    if (a == 0) // 2^8
    {
        return 0;
    }

    if (b == 0)
    {
        return 1;
    }

    if (b % 2 == 0)
    {
        ll l = 0;

        l = a * power(a, b / 2);
        return (2 * l);
    }

    // return res = a * power(a, b - 1);
};

int main()
{
    int a, b;
    cin >> a >> b;

    cout << power(a, b) << endl;
}