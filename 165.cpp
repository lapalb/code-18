#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        map<int,int> m;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(!m.count(x)){m[x]=1;}
            else
            m[x]=m[x]+1;
        }
        for(auto x: m)
        {
            if(x.second%2==1)
            cout<<x.first<<endl;
        }
   
