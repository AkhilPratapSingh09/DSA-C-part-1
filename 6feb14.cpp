#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i =1;
    
    while(i<=n){
        int j=1;
        char ch = 'D'-i+j;
        while(j<=i){
            cout<<ch<<" ";
            ch++;
            j++;

        }
        i++;
        cout<<endl;
    }
    return 0;
}