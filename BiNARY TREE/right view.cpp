#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *buildtree()
{
    int d;
    cin >> d;

    if (d == -1)
    {
        return NULL;
    }
    // otherwise

    node *root = new node(d);
    root->left = buildtree();
    root->right = buildtree();
    return root;
}

void printpre_right(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    printpre_right(root->right);
}

int main()
{
    node *root = buildtree();

    cout << "right view : ";
    printpre_right(root);
    cout << endl;

    return 0;
}