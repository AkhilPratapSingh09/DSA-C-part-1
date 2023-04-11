#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    char sum = 'A';
    while(i<=n){
        int j=1;
        //  char ch = 'A';
        
        while(j<=n){
            cout<<sum<<" ";
            sum=sum+1;
            
            j++;
        }cout<<endl;
        i++;

    }

    return 0;
}