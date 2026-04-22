#include<iostream>
using namespace std;
int main()
{
    int num =13;
    for(int i=2;i<num;i++)
    {
        if(num%i==0){
        cout<<"not prime";
        break;
        }
        else{
        cout<<"prime";
        break;
        }
    }

}