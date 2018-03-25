#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y,z;
        cin>>n>>x>>y>>z;
        int a[3]={x,y,z};
        sort(a,a+3);
        x=a[0];
        y=a[1];
        z=a[2];
        int p[4][n+1];
        rep(i,0,4)
        {
            rep(j,0,n+1)
            {
                if(j==0|| i==0)p[i][j]=0;
                else if(j-a[i-1]<0)
                p[i][j]=p[i-1][j];
                else
                p[i][j]=max(p[i-1][j], 1+ p[i][j-a[i-1]]);
            }
        }
        cout<<p[3][n]<<endl;

    }
}
