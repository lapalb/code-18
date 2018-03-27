#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int cnt=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j]){
                    cnt++;
                v.push_back(make_pair(i,j));
                swap(a[i],a[j]);
            }
        }
    }
    cout<<cnt<<endl;
    for(int i=0;i<cnt;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}
