#include <iostream>
using namespace std;

int main() {
    int s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(s1==s2 && s1==s3)
    {
        cout<<"equilateral";
    }
    else if(s1!=s2 && s1!=s3)
    {
        cout<<"scalene";
    }
    else
    {
        cout<<"isosceles";
    }

    return 0;
}
