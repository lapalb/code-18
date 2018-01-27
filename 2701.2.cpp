#include <iostream>

using namespace std;

int horner(int a[],int n,int x)
{
    int s=0;
    for(int i=n-1;i>=0;i--)
    {


        int p=1;
        for(int j=0;j<i;j++)
        {
            p=p*x;
        }
        s+=(a[n-1-i]*p);
    }
    return s;
}
int main()
{
    int poly[] = {2, -6, 2, -1};
    int x = 3;
    int n = sizeof(poly)/sizeof(poly[0]);
    cout << "Value of polynomial is " << horner(poly, n, x);
    return 0;
}
