#include<iostream>
using namespace std;
int linearSearch(int arrr[],int n, int key){
    for(int i=0;i<n;i++){
      if(arrr[i]==key){
        return i;
      }
    }return -1;
}
int main()
{
    int n;
    cin>>n;

    int arrr[n];
    for(int i=0;i<n;i++){
    cin>>arrr[i]; 
    }
    int key;
    cin>>key;

cout<<linearSearch(arrr,n,key)<<endl;
     
    return 0;
}