#include<iostream>
using namespace std;

int ans(int n){

    int sum=0;

    for(int i=1;i<=n;i++)
        
        sum= sum +i;
        return sum;
} 
     
int32_t main()
{
    int n;
    cin >> n;
   
   cout<<ans(n)<<endl;

        
    }
