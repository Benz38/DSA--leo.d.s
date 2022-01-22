#include <bits/stdc++.h>
using namespace std;

int bin_search(int ar[], int start, int end, int key)
{

	while (start <= end)
	{

		int mid = start + (end - start) / 2;

		if (ar[mid] == key)
			return mid;

		if (ar[mid] < key)
			start = mid + 1;

		else
			end = mid - 1;
	}
	return -1;
}

int main()
{

	int ar[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
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