#include<bits/stdc++.h>
using namespace std;
#define A 1000001
#define rep(i,a,b) for(int i=a;i<b;i++)
int main()
{
	int n;
	cin>>n;
	int c[n],t[n];
	rep(i,0,n)cin>>c[i];
	rep(i,0,n)cin>>t[i];
 
	vector<int> tr;
	vector<int> w;
	vector<int> trW;
 
	rep(i,0,n)
	{
		if(t[i]==1)tr.push_back(c[i]);
		else if(t[i]==2) w.push_back(c[i]);
		else
		trW.push_back(c[i]);
 
	}
	int a=A,b=A,c1=A;
	if(!tr.empty())
	 a=*min_element(tr.begin(),tr.end());
 
	if(!w.empty())
	 b=*min_element(w.begin(),w.end());
 
	if(!trW.empty())
	 c1=*(min_element(trW.begin(), trW.end()));
 
 
	if(a+b>c1)cout<<c1;
        else
        cout<<a+b;
}
