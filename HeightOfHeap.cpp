#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x;
        rep(i,0,n)cin>>x;
        x=floor(log2(n));
        cout<<x<<endl;
    }
}
