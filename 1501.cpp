#include<bits/stdc++.h>
using namespace std;
//Given two numbers, fact and n, find the largest power of n that divides fact! (Factorial of fact).
/*
  fact!=1*2*3...*fact
  solution=(n,2*n..fact) + (n*n, 2*n*n)+..
  formula=( (fact/n) +(fact/n*n) ) this is legendere formula
*/
int main()
{
    int fact,n;
    cin>>fact>>n;
    int x=0;
    while(fact/n)
    {
        x+=(fact/n);
        fact/=n;
    }
    cout<<x;
}
