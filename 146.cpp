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
        int a[n+1];
        a[1]=1;
        a[2]=2;
        a[3]=4;
        rep(i,4,n+2)
        {
            a[i]=a[i-1]+a[i-2]+a[i-3];
        }
        cout<<a[n]<<endl;
    }
}
