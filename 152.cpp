#include<bits/stdc++.h>
using namespace std;
int minm(int a, int b, int c){ return min(a, min(b,c));}
int edit(string s1,string s2, int l1,int l2)
{
    if(l1==0) return l2;
    if(l2==0)return l1;
    if (s1[l1-1] == s2[l2-1])
        return edit(s1, s2, l1-1, l2-1);
    return 1+ minm(edit(s1,s2,l1,l2-1),
    edit(s1,s2,l1-1,l2),
    edit(s1,s2,l1-1,l2-1)
    );
    //return e;
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
