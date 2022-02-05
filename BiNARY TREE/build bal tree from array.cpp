#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left = NULL;
    node *right = NULL;

    node(int d)
    {
        data = d;
    }
};

// Pre-order traversal
void printPre(node *root)
{

    if (root == NULL)
    {
        return;
    }

    // print root
    cout << root->data << " ";
    printPre(root->left);  // Call on left part
    printPre(root->right); // Call on right part
}

node *buildBalancedTree(int arr[], int s, int e)
{
    if (s == e)
    {
        return NULL;
    }

    int mid = (s + e) / 2;

    node *root = new node(arr[mid]);
    root->left = buildBalancedTree(arr, s, mid);
    root->right = buildBalancedTree(arr, mid + 1, e);

    return root;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    int n = sizeof(arr) / sizeof(arr[0]);
    node *root = buildBalancedTree(arr, 0, n);
    printPre(root);
    cout << endl;
}