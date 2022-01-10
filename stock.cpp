#include<bits/stdc++.h>
using namespace std;
int main()
{
    int max=0,a[6]={7,6,4,3,1,0};

    for(int i=0;i<6;i++){
        for(int j=0;j<i+1;j++){
            if(a[i]-a[j]>max){
                max=a[i]-a[j];
            }
        }
    }
cout<<max<<endl;
return 0;
}