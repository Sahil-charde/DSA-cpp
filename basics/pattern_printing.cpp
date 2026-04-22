#include<iostream>
using namespace std;
int main()
{
    // ABCD pattern in each line
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
    char ch=65;  //gets reset in each line 
    for(int j=1;j<=n;j++)
    {
        cout<<ch;
        ch++;
    }
    cout<<endl;
    } 

    cout<<"-------------------------------"<<endl;
    // ABCDEFGH... Pattern
    
    char ch=65;  //dont get reset so goes on increase so intitialize at top..
    for (int i = 1; i <= n; i++)
    {
    for(int j=1;j<=n;j++)
    {
        cout<<ch;
        ch++;
    }
    cout<<endl;
    }
    cout<<"-------------------------------"<<endl;

    // 1234 pattern in each line
    
    for (int i = 1; i <= n; i++)
    {
    for(int j=1;j<=n;j++)
    {
        cout<<j;
    }
    cout<<endl;
    }
    cout<<"-------------------------------"<<endl;

    // 1234.... pattern

    int num=1;
    for (int i = 1; i <= n; i++)
    {
    for(int j=1;j<=n;j++)
    {
        cout<<num;
        num++;
    }
    cout<<endl;
    }
    cout<<"-------------------------------"<<endl;

    // triangular star pattern

    
    for (int i = 0; i < n; i++)
    {
    for(int j=0;j<i+1;j++)  //inner loop will run for i+1 time because in each line star=count of i.
    {
        cout<<" * ";
    }
    cout<<endl;
    }
    cout<<"-------------------------------"<<endl;

    //1 22 333 4444 pattern in triangle 
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<i+1;
        }
        cout<<endl;
    }

    cout<<"-------------------------------"<<endl;
    // 1
    // 21
    // 321
    // 4321  pattern 

    
    for (int i = 0; i < n; i++)
    {
    for(int j=i+1;j>0;j--)
    {
        cout<<j;
    }
    cout<<endl;
    }
    cout<<"-------------------------------"<<endl;


    //floyds triangle

   
    
    for (int i = 0; i < n; i++)
    {
    for(int j=0;j<i+1;j++)
    {
        cout<<num ;
        num++;
    }
    cout<<endl;
    }
    cout<<"-------------------------------"<<endl;

    // inverted triangle from left

    
    for(int i=0;i<n;i++)
    {
        //spaces
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        //numbers
        for(int j=0;j<n-i;j++)
        {
            cout<<i+1;
        }
        cout<<endl;
    }
    cout<<"-------------------------------"<<endl;

    // character inverted pattern

    
    char ch1='A';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<n-i;j++)
        {
            cout<<(ch1);
        }
        cout<<endl;
        ch1++;
    }
    cout<<"-------------------------------"<<endl;


    //      1
    //     121
    //    12321      pattern 

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)  //  for spaces (n-i-1)
        {
            cout<<" ";
        }
        for(int j=1;j<=i+1;j++)   // i+1
        {
            cout<<j;
        }
        for(int j=i;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }


}