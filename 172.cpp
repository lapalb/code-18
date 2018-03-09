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
        int x=1<<k;
        n=(n|x);
        cout<<n<<endl;
    }
}
