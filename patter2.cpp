#include<iostream>
using namespace std;
int main()
{
    // int n;
    // cin>>n;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=1+n-i;j++){
    //         cout<<j<<" ";
    //     }cout<<endl;
    // // }

    // for(int i=1; i<=n; i++){
    //     for (int j=1;j<=i; j++){
    //         if((i+j)%2==0){
    //             cout<<"1";
    //         }else{
    //             cout<<"0";
    //         }
    //     }cout<<endl;
    // }
    // for(int i=1; i<=n;i++){
    //     for(int j=1; j<=n-i; j++){
    //         cout<<" ";
    //     }for(int j=1;j<=n;j++){
    //         cout<<"*";
    //     }cout<<endl;
    // }
    // for (int i=1; i<=n; i++){
    //     for(int j=1; j<=n-i;j++){
    //         cout<<" ";
    //     }for(int j=1; j<=i;j++){
    //         cout<<j<<" ";
    //     }cout<<endl;
    // }
    int n;
    cin>>n;

     for (int i=1; i<=n; i++){
        int j;
        for(j=1;j<=n-i;j++){
            cout<<"  ";

        }
        int k=i;
        for(;j<=n;j++){
            cout<<k--<<" ";
        }
        k=2;
        for(;j<=n+i-1;j++){
            cout<<k++<<" ";
        }cout<<endl;
     }
    

    return 0;
}