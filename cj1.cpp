#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)
bool f(string s, long long d)
{
    int d1=1;
    rep(i,0,s.size())
    {
        if(s[i]=='C'){d1=2*d1;}
        else
        d-=d1;
    }
    if(d>=0)return true;
    else
    return false;
}
int solve(string s, long long d)
{
    int cnt=0;
    while(!f(s,d))
    {
       for(int i=(s.size()-2);i>=0;i--)
       {
           if(s[i]=='C')
           {
               swap(s[i],s[i+1]);
               cnt++;
               i=s.size()-1;
               if(f(s,d))
               {
                   return cnt;
               }
           }
       }
       if(!f(s,d))return -1;
    }
    return 0;

}
int main()
{
    int t;
    cin>>t;
    rep(i,0,t)
    {
        long long d;
        cin>>d;
        string s;
        cin>>s;

        int ans=solve(s,d);
        if(ans<0)cout<<"Case #"<<": IMPOSSIBLE"<<endl;
        else
        cout<<"Case #"<<i+1<<": "<<ans<<endl;
    }
}
