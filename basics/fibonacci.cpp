#include<iostream>
using namespace std;
int main()
{
     int a=0,nextNum;
    int b=1;
    int n=10;
    cout<<a<<"\t"<<b<<"\t";
    for(int i=0;i<n;i++)
    {
        nextNum=a+b;
        cout<<nextNum<<"\t";
        a=b;
        b=nextNum;

    }
}