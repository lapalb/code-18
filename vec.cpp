#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define p for(auto x: v){cout<<(x);}

int main()
{
   vector<int> v(5,INT_MIN); // vector <int> v(size_t n, val_to_init)
   for(auto x=v.begin();x<v.end();x++)
   {
       *x=10;
   }
   rep(i,0,5)v.push_back(i*13);
   vector<int>::iterator itr=v.end();
   itr=itr-1;
   rep(i,0,5)itr=v.insert(itr,12); // insert return the first of newly inserted elemnt and do check for pollution of iterator

   for(auto x: v){cout<<x<<" ";}
}
