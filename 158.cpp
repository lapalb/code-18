#include<bits/stdc++.h>
using namespace std;
int compareints(const void* a, const void *b)
{
    return (*(int *)a - *(int *) b);
}
int part(int a[], int l, int r)
{
    int pivot=a[r];
    int pi=l;
    for(int i=l;i<r;i++)
    {
     if(a[i]<pivot)
     {
         swap(a[i],a[pi]);
         pi++;
     }
    }
    swap(a[pi],a[r]);
    return pi;
}
void q(int a[], int l, int r)
{
    if(l<r){
    int pindex=part(a,l,r);
    q(a,l,pindex-1);
    q(a, pindex+1,r);}
}


int main()
{
    int a[]={90,80,70,60,50};
    //qsort(a,5,sizeof(int),compareints);
    q(a,0,4);
    for(auto x : a)
        cout<<x<<"\t";
}
