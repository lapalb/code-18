#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int minm(int a, int b, int c){ return min(a, min(b,c));}
int edit(string s1,string s2, int l1,int l2)
{
    int a[l1+1][l2+1];
    rep(i,0,l1+1)
    {
        rep(j,0,l2+1)
        {
            if(i==0)a[i][j]=j;
            else if(j==0)a[i][j]=i;
            else if(s1[i-1]==s2[j-1])a[i][j]=a[i-1][j-1];
            else
                a[i][j]=1+minm(a[i][j-1],a[i-1][j],a[i-1][j-1]);

        }
    }

    return a[l1][l2];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l1,l2;
        cin>>l1>>l2;
        string s1,s2;
        cin>>s1>>s2;


        cout<<edit(s1,s2,l1,l2) <<endl;
    }
}
