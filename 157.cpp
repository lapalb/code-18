#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i,f=0;
        for( i=(s.size()-1);i>=0;i--)
        {
            if(s[i]=='1')
            {
                cout<<i<<endl;
                f++;
                break;
            }
        }
        if(f==0) cout<<-1<<endl;
    }
}
