#include<iostream> 
using namespace std;
int main()
{
    //  int array[5] ={2,3,5,6,7};
    //  cout<<array[3]<<endl;
    int n;
    cin>>n;

    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}