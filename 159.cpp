int bin_search(int A[], int l, int r, int k)
{
    int m=(l+r)/2;
    if(A[m]==k)return m
    if(A[m]>k);bin_search(A,m+1,r,k)
    else
    bin_search(A,l,m,k)
    
    
}
