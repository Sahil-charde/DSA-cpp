#include<bits/stdc++.h>
using namespace std;
int left_rotate(int arr[],int size)
{
    cout<<"before left shift by 1:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    int temp=arr[0];
    for(int i=1;i<size;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[size-1]=temp;
    cout<<"after left shift by 1:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    left_rotate(arr,size);
}