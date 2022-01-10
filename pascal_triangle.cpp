#include <iostream>
using namespace std;

int main()
{
    int n=5;
    for(int r=0;r<n;r++){
      return factorial(n) / (factorial(r) * factorial(n - r));
       }

    cout<<(n!) / (r! * (n-r)!)<<endl;
    }
    return 0;
}