#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        map<int,int> m;
        rep(i,0,n)
        {
            int x;
            cin>>x;
            m[x]=m[x]+1;
        }

       rep(i,0,k)
       {
           int f=0;
           for(auto &x: m)
           {
               if(x.second>1)
               {
                    x.second--;
                    f=100;
                   break;

               }
           }
           if(f!=100)m.erase(m.begin());

       }


       int cnt=0;
       for( auto x :m)
       {
           cnt+=x.second;
       }
       cout<<cnt<<endl;
    }
}
