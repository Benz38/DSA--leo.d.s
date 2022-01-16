#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    vector <int> v;
    vector <int> res;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        v.push_back(val);
    }

    
    for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
           for(int k=j+1;k<n;k++){

               int key,mid=0,s=k=1,e=v.size()-1;
               key=t-(v[i]+v[j]+v[k]);

            while(s<=e){
                mid=s+(e-s)/2;
               if(mid==key){
                   v.push_back(v[i]);
                   v.push_back(v[j]);
                   v.push_back(v[k]);
                   v.push_back(v[mid]);
               }

               if(mid<key){
                   s=mid+1;
               }else 
               {
                   e=mid-1;
               }
            }
           }
       }
    }

		vector <int> :: iterator it=res.begin();
       for(auto it=res.begin();it!=res.end();it++){
        cout<<(*it)<<endl;
       }  

return 0;
}