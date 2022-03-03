#include<bits/stdc++.h>
using namespace std;

void level_order(node* root){

    if(root==NULL){
        return;
    }



    queue<node*> q;
    q.push(root->data);
    
    int f=q.front();

    if(!q.empty()){

        int data;
        data=q.front();

        cout<<data<<endl;

        level_order(root->left,v);
        level_order(root->right,v);
    }



}













int main()
{



return 0;
}


