#include<bits/stdc++.h>
using namespace std;
void boost()
{
    //cin.tie(NULL);
    //ios_base
}
int main()
{
    int t;
    cin>>t;
    sos:
    while(t--)
    {

        int n;
        cin>>n;

        vector<int> v;
        while(n)
        {
            v.push_back(n&1);
            n=n>>1;
        }
        for(int i=0;i<(v.size()-1);i++)
        {
            if(v[i]==v[i+1] && v[i]==1)
            {
                cout<<0<<endl;
                goto sos;
            }
        }

        cout<<1<<endl;
    }
}
