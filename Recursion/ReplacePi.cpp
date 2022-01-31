#include <bits/stdc++.h>
using namespace std;

void replacepi(char a[], int i)
{
    //base case
    if (a[i] == '\0' or a[i + 1] == '\0')
    {
        return;
    }

    //looking for pi
    if (a[i] == 'p' and a[i + 1] == 'i')
    {
        //shifting + replacement with pi

        int j = i + 2;
        //take j to the end of the array
        while (a[j] != '\0')
        {
            j++;
        }

        //shifting right to left
        while (j >= i + 2)
        {
            a[j + 2] = a[j];
            j--;
        }

        // replacement + recursive call
        a[i] = '3';
        a[i + 1] = '.';
        a[i + 2] = '1';
        a[i + 3] = '4';
        replacepi(a, i + 4);
    }
    else
    {
        replacepi(a, i + 1);
    }
    return;
}

int main()
{
    char a[1000];
    cin >> a;
    replacepi(a, 0);
    cout << a << endl;

    return 0;
}