#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v={5,10,15,20,25};
    v.erase(v.begin()+2);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
