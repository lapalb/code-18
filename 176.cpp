#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int cnt=0;
        while(n)
        {
            cnt++;
            if(n&1==1)
            {
                cout<<cnt<<endl;
                break;
            }
            n=n>>1;
        }
        if(n==0)cout<<0<<endl;
    }
}

