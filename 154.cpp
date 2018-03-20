#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; if(n==0){cout<<0<<endl; continue;}
        int a[n];int res[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            res[i]=1;
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(a[j]<a[i])
                res[i]=max(res[i],res[j]+1);
            }
        }
       // for(auto x: res)cout<<x<<" "<<endl;
      // if(n==0)cout<<0<<endl;
        cout<<*max_element(res,res+n)<<endl;
    }
}
