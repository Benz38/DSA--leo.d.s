#include <bits/stdc++.h>
using namespace std;

int bin_search(int ar[], int start, int end, int key)
{
    int ans = -1;
    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (ar[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }

        else if (ar[mid] < key)
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{

    int ans = -1;
    int ar[] = {1, 2, 3, 4, 4, 4, 5, 6, 7, 8, 9, 10};
    int key = 4;

    int size = sizeof(ar) / sizeof(ar[0]);

    int result = bin_search(ar, 0, size - 1, key);

    if (result == -1)
    {
        cout << "not available" << endl;
    }
    else
    {
        cout << "key is present at index: " << result;
    }

    return 0;
}