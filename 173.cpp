#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,l,r;
        cin>>n>>l>>r;
        int x=(1<<(l-1));
        for(int i=l;i<=r;i++)
        {
            n=n^x;
            x=x<<1;
        }
        cout<<n<<endl;
    }
}
