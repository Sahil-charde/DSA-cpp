#include<iostream>
using namespace std;
int main()
{
    int sum_even=0;
    int sum_odd=0; 
    int arr[7]={1,2,3,4,5,6,7};
    for (int i = 0; i <= 6; i++)
    {
        if(arr[i]%2==0)
        {
            sum_even = sum_even + arr[i];
        }
        if(arr[i]%2!=0)
        {
            sum_odd = sum_odd + arr[i];
        }
    }
    int total = sum_even + sum_odd;
    cout<<total;
}