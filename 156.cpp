#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m, n,k;
        cin>>m>>n>>k;
        priority_queue <int,vector<int>, greater<int> > s;
        for(int i=0;i<(m+n);i++)
        {
            int x;
            cin>>x;
            s.push(x);
        }
        for(int i=0;i<(k-1);i++)
        {
            s.pop();
        }
        cout<<s.top()<<endl;
    
    }
}
