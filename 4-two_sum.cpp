#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    vector <int> v;

    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        v.push_back(val);
    }

    for(int i=0;i<n-1;i++){
       
        if(t==v[i]+v[i+1]){
            cout<<i<<" "<<i+1<<endl;
        }

    }

return 0;
}