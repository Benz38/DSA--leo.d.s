#include <bits/stdc++.h>
using namespace std;

char word[][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void spelling(int n)
{

    if (n == 0)
    {
        return;
    }

    spelling(n / 10);
    int i = n % 10;
    cout << word[i] << " ";
    return;
}

int main()
{
    int n;
    cin >> n;

    spelling(n);

    return 0;
}