#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum =1;
    int i =1;
    while(i<=n){
        int j =1;
        int sum = i;
        while(j<=i){
            cout<<sum<<" ";
            sum=sum+1;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}