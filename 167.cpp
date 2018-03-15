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
        vector <int> v;
       //getting binary represetation
       while(n)
       {
           v.push_back(n&1);
           n=n>>1;
       }
       int maxc=0;
       int c=0;
       for(int i=0;i<v.size();i++)
       {
          
           if(v[i]==0)
           {
               if(maxc<c)
               {
                   maxc=c;
          
               }
               c=0;
               
           }
           else{
               c++;
               if(i==(v.size()-1)&& c> maxc)maxc=c;
           }
          
       }
       
       cout<<maxc<<endl;
    }
}
