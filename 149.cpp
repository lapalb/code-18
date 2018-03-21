#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,wm;
        cin>>n>>wm;
        
        int val[n],wt[n];
        rep(i,0,n)
        {
            cin>>val[i];
        }
        rep(i,0,n)
        {
            cin>>wt[i];
        }
        int K[n+1][wm+1];
        rep(i,0,n+1)
        {
            rep(w,0,wm+1)
            {
                 if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
            }
        }
        cout<<K[n][wm]<<endl;
    }
}
