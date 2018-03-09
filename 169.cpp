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
       if((v.size())%2==1) v.push_back(0);
     //Swapping
      int i=0;
      for(i=1;i<v.size();i+=2)
      {
          swap(v[i-1],v[i]);
      }
      int num=0;
        for(int i=0;i<v.size();i++)
        {
            num+=(v[i]*(pow(2,i)));
        }
       cout<<num<<endl;
    }
}
