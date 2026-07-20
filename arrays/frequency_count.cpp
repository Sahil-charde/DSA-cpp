#include<bits/stdc++.h>
using namespace std;
int freq(int arr[],int n)
{
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    for(auto it:m){
        cout<<it.first<<"->"<<it.second<<endl;
    }
}
int main()
{
    int arr[10]={1,2,1,2,3,2,1,4,2,1};
    int n=10;
    freq(arr,n);
    
}