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
        int a[n];
        rep(i,0,n)
        {
            cin>>a[i];
        }
        int is=0;
        int s=accumulate(a,a+n,is);
        if(s%2!=0){cout<<"NO\n";continue;}
        s=s/2;
        bool p[n+1][s+1];
        rep(i,0,n+1)
        {
            rep(j,0,s+1)
            {
                if(j==0)p[i][j]=true;
                else if( i==0)p[i][j]=false;
                else
                {
                    
                    p[i][j]=p[i-1][j];
                    if(j-a[i-1]>=0)
                    p[i][j]=(p[i-1][j] || p[i-1][j-a[i-1]]);
                }

            }
        }
        if(p[n-1][s]==true)
        cout<<"YES\n";
        else
        cout<<"NO\n";



    }
}
