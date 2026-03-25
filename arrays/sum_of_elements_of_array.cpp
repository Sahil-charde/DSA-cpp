#include <iostream>
using namespace std;
int main() {
    
    int n;
    int sum=0;
    int arr[n];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }
    cout<<sum;
    return 0;
}
