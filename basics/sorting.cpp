#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={8,3,6,1,9};
    //ascending 
    sort(v.begin(),v.end());
    for(int x:v)
    {
        cout<<x;
    }
    cout<<endl;
    
    //descending 
    sort(v.begin(),v.end(),greater<int>());
    for(int x:v)
    {
        cout<<x;
    }
}