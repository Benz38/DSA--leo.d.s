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

void printpre(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    printpre(root->left);
    printpre(root->right);
}

void printin(node *root)
{
    if (root == NULL)
    {
        return;
    }
    // otherwise
    printin(root->left);
    cout << root->data << " ";
    printin(root->right);
}

void printpost(node *root)
{
    if (root == NULL) // Base condition
    {
        return;
    }
    // otherwise
    printpost(root->left); // Hypothesis
    printpost(root->right);
    cout << root->data << " "; // Induction
}

int main()
{
    node *root = buildtree();

    cout << "pre-order : ";
    printpre(root);
    cout << endl;

    cout << "In-order : ";
    printin(root);
    cout << endl;

    cout << "post-order : ";
    printpost(root);
    cout << endl;

    return 0;
}