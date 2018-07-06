#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={1,2,4,6,8,9};
    int b[]={1,2,3,5,10,100};
    vector<int> v(14,140);
    auto itr=v.begin();
    merge(a,a+6,b,b+6,itr);
    for(auto x: v)
    {
        cout<<x<<" ";
    }
    cout<<"---------------\n";
    
    
}
