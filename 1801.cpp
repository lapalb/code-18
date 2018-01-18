#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   string s=to_string(n);
   reverse(s.begin(),s.end());
   
   int m=stoi(s);
   cout<<m;
}

// Iterative
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int rev_num=0;
   while(n)
   {
       rev_num = rev_num*10 + n%10;
       n/=10;
   }
   cout<<rev_num;
}
// Recursive
