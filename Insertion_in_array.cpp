#include<iostream>
using namespace std;
int main(){
    int arr[100],n,value,index;
    cout<<"enter the number of element :"<<endl;
    cin>>n;
    for(int i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    cout<<"*******before insertion :******** "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n enter the index and value that u want to enter "<<endl;
    cin>>index>>value;
    for(int i=n-1;i>=index;i--){
arr[i+1]=arr[i];
    }

arr[index]=value;
    n=n+1;
    cout<<"-------after insertion------- "<<endl;
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"complete programme ::"<<endl;
return 0;
}
