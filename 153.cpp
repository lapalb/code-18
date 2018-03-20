#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        string s1,s2;
        cin>>s1>>s2;
        int l1=s1.size();
        int l2=s2.size();
        int a[l1+1][l2+1];

        for(int i=0;i<(l1+1);i++)
        {
            for(int j=0;j<(l2+1);j++)
            {
                if(i==0 || j==0)a[i][j]=0;
                else
                {
                if(s1[i-1]==s2[j-1])
                a[i][j]=a[i-1][j-1]+1;
                else
                a[i][j]=max(a[i][j-1],a[i-1][j]);
                }
            }
        }
        cout<<a[l1][l2]<<endl;
        
    }
}
