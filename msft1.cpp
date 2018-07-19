// C++ program to print the last N lines
#include <bits/stdc++.h>
using namespace std;

void PrintLast(string s, int t)
{
/*Completing My Own Function*/
vector<string> v;
char * ch=&s[0];
ch=strtok(ch,"\n");
while(ch)
{
v.push_back(ch);
ch=strtok(NULL,"\n");
}
int cnt=0;
reverse(v.begin(),v.end());
for(auto i=v.begin();(i!=(v.end()) &&cnt<t);i++){cout<<(*i);cnt++;}
}

// Driver Code
int main()
{
	string s1 = "str1\nstr2\nstr3\nstr4\nstr5\nstr6\nstr7\nstr8\nstr9"
				"\nstr10\nstr11\nstr12\nstr13\nstr14\nstr15\nstr16\nstr17"
				"\nstr18\nstr19\nstr20\nstr21\nstr22\nstr23\nstr24\nstr25";
	int n = 10;
	PrintLast(s1, n);

	return 0;
}
