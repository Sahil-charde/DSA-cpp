#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int l= sizeof(arr)/sizeof(arr[0]);
    for(int i=l-1;i>=0;i--)
    {
        cout<<arr[i]<<endl;
    }


}