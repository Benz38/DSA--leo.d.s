#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    vector <int> v;
    for(i=0;i<n;i++){
        int val;
        cin>>val;
        v.push_back(val);
    }

    sort(v.begin(),v.end());
    
    int max_count=1;
    int count=1;
    while(i<n-1){
        if((v[i+1]-v[i]==1)){
            if(count>max_count){
                max_count=count;
            }
        i++;
        }else{
            i++;
            count=1;
        }
    }
    cout<<max_count<<endl;
    
return 0;
}