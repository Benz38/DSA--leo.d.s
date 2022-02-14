#include <bits/stdc++.h>
using namespace std;

template <class T>

//linear search function
int search(T ar[], int n, T key)
{

    for (int p = 0; p < n; p++)
    {

        if (ar[p] == key)
        {
            return p;
        }
    }
    return -1;
}

int main()
{

    // int ar[] = {1, 2, 3, 4, 5, 6, 7, 8};
    // int n = sizeof(ar) / sizeof(int);
    // int key;
    // cin >> key;

    float ar[] = {1.1, 1.2, 1.3};
    int n = sizeof(ar) / sizeof(char);
    float key = 1.3;
    cout << search(ar, n, key);
}