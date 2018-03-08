#include<bits/stdc++.h>
using namespace std;
unsigned int countSetBits(long long int n)
{
  unsigned int count = 0;
  while (n)
  {
    count += n & 1;
    n >>= 1;
  }
  return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long long n;
    cin>>n;
    (countSetBits(n)==1)? cout<<"YES\n" : cout<<"NO\n";
    }
}
