#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,k;
      cin>>n>>k;
      k=1<<k;
      if((n&k)==0)  cout<<"No\n"; else cout<<"Yes\n";
    }
}
