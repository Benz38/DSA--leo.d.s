#include <bits/stdc++.h>
using namespace std;

int find(vector<int> &v, int key)
{

    int size = v.size();
    int s = 0, e = size - 1;

    if (size == 0)
    {
        return -1;
    }

    while (s <= e)
    {

        for (int i = 0; i < size; i++)
        {

            int mid = s + (e - s) / 2;

            if ()
        }

        int main()
        {
            vector<int> v;
            int n;
            cin >> n;

            for (int i = 0; i < n; i++)
            {
                int data;
                cin >> data;
                v.push_back(data);
            }

            cout << find(key) << endl;

            return 0;
        }