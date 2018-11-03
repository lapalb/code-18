#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    scanf("%d",&t);
    while(t--)
    {

        int n;
        scanf("%d",&n);
        int a[n+1],c[n+1]={0},c2[n+1]={0};
        rep(i,1,n+1){int x;scanf("%d",&x); a[i]=x;c[x]++;}
        int ans=0;
        rep(i,1,n+1)
        {
            if(c[i]>0)
            {
                c2[a[i]]++;
                if(c2[a[i]]==2){
                ans=1;
                break;}
            }
        }
        rep(i,1,n+1){cout<<a[i]<<" " <<c[i]<<" "<<c2[i]<<endl;}
        ans==0? printf("Poor Chef\n") : printf("Truly Happy\n");
    }
}
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    scanf("%d",&t);
    while(t--)
    {

        int n;
        scanf("%d",&n);
        int a[n+1],c[n+1]={0},c2[n+1]={0};
        rep(i,1,n+1){int x;scanf("%d",&x); a[i]=x;c[x]++;}
        int ans=0;
        rep(i,1,n+1)
        {
            if(c[i]>0)
            {
                c2[a[i]]++;
                if(c2[a[i]]==2){
                ans=1;
                break;}
            }
        }
        rep(i,1,n+1){cout<<a[i]<<" " <<c[i]<<" "<<c2[i]<<endl;}
        ans==0? printf("Poor Chef\n") : printf("Truly Happy\n");
    }
}
