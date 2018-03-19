#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(m.count(x)) m[x]=m[x]+1;
            else
            m[x]=1;

        }
        for(auto x:m)
        {
            if(x.second==1)
            cout<<x.first<<endl;
        }
    }
}
