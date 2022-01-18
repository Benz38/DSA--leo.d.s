#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertathead(node *&head, int val)
{

    if (head == NULL)
    {
        head = new node(val);
        return;
    }

    node *newnode = new node(val);
    newnode->next = head;
    head = newnode;
}

void disp(node *head)
{

    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
}

int main()
{
    node *head = NULL;
    insertathead(head, 5);
    insertathead(head, 4);
    insertathead(head, 3);
    insertathead(head, 2);
    insertathead(head, 1);

    disp(head);
    cout << endl;

    return 0;
}