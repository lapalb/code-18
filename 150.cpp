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
        int a[n],b[n];
        rep(i,0,n)
        {
            cin>>a[i];
            b[i]=INT_MAX;
        }
        if(a[0]==0){cout<<-1<<endl;continue;}
        b[0]=0;
        rep(i,0,n)
        {
            rep(j,0,i)
            {
                if(a[j]+j>=(i))
                b[i]=min(b[i],b[j]+1);
            }
        }
        if(b[n-1]>10000){cout<<-1<<endl;continue;}
        cout<<b[n-1]<<endl;
        
    }
}
