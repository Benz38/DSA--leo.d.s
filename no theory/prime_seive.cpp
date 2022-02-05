#include <bits/stdc++.h>
using namespace std;

// Seive approach -- optimised approach

void prime_seive(int *p)
{

    //mark all odd as prime
    for (int i = 3; i <= 1000000; i += 2)
    {
        p[i] = 1;
    }

    //seive
    for (long long i = 3; i <= 1000000; i += 2)
    {
        if (p[i] == 1)
        {
            //mark all multiples of i as not prime
            for (long long j = i * i; j <= 1000000; j = j + i)
            {
                p[j] = 0;
            }
        }
    }
    //special case
    p[2] = 1;
    p[0] = p[1] = 0;
}

int main()
{
    int n;
    cin >> n;

    int p[1000005] = {0};
    prime_seive(p);

    for (int i = 0; i <= n; i++)
    {
        if (p[i] == 1)
            cout << i << " ";
    }
    return 0;
}