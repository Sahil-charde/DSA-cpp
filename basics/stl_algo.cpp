#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5,6,7};
    auto it = find(v.begin(),v.end(),4);
    // ele mila to iterator return hota hai nahi to v.end return hota hai
    if(it != v.end())
    cout << "Found";
    else
    cout << "Not Found";

    vector<int> c = {1,2,2,3,2,4};
    cout << count(c.begin(), c.end(), 2);

    auto i=max_element(v.begin(),v.end());
    cout<<*i;
    auto x=min_element(v.begin(),v.end());
    cout<<*x;
    cout<<endl;


    //binary search 
    // vector should be sorted 
    int n;
    cout<<"enter n";
    cin>>n;
    vector<int> v;
    cout<<"enter values";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    cout<<"sorted vector:";
    for(int a:v){
        cout<<a;
    }
    int s;
    cout<<"enter no to find:";
    cin>>s;
    if(binary_search(v.begin(),v.end(),s)){
        cout<<"found";
    }else{
        cout<<"not found";
    }
    

    //lower bound - greater than or equal to the target
    auto it = lower_bound(v.begin(),v.end(),3);
    cout<<*it;

    //upper bound - greater than target (equal nahi)
    auto it = upper_bound(v.begin(),v.end(),3);
    cout<<*it;
}