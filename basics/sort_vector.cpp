#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v = {6,2,9,-2,0,-4,12,-3,-9};
    sort(v.begin(),v.end());
    for(int i=1;i<v.size();i++)
    {
        cout<<v[i]<<"\t";
    }


}