#include <iostream>
using namespace std;
int main()
{
    // int row, col;

    // Rectangle
    // // cin >> row >> col;

    // for (int i = 1; i <= 6; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    // hollow rectangle
    // for (int i = 1; i <= 6; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         if (i == 1 || i == 6 || j == 1 || j == 5)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }cout<<endl;
    // }

    // Given n to * print
    // int n;
    // cin>>n;

    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++){

    //         cout << "*";
    //     }

    //     cout << endl;

    //     }

    // int n;
    // cin>>n;

    // for( int i=1; i<=n; i++){
    //     for(int j=1; j<=n;j++){
    //         if(j<=n-i){
    //             cout<<" ";
    //         }else{
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin>>n;

    // for( int i=1; i<=n; i++){
    //    for(int j=1; j<=i;j++){

    //         cout<<i<<" ";
    //     }

    //    cout<<endl;
    // }

    //       return 0;

    // int n;
    // cin>>n;

    // int count =1;

    // for(int i=1;i<=n;i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<count<<" ";
    //         count++;
    //     }cout<<endl;

    // }

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int space = 2 * n - 2 * i;
        for (int j = 1; j <= space; j++){
        
            cout <<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int space = 2 * n - 2 * i;
        for (int j = 1; j <= space; j++){
        
            cout <<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}