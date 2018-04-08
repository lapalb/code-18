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
        int cnt=0;
        set<int> s;
        int a[n];

        rep(i,0,n)
        {
            int x;
            cin>>x;
            a[i]=x;
            s.insert(x);
        }
        rep(i,0,n-1)
        {
            rep(j,i+1,n)
            {
                float z=(a[i]+a[j])/2.0;
                if((z-int(z))==0)
                if(!(s.find((a[i]+a[j])/2.0)==s.end()))
                    cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
