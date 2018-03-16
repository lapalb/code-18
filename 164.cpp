int maxm=0;
void subs(vector<int> v2)
{
    if(v2.size()!=0){
    int r=v2[0];
    for(int i=0;i<(v2.size()-1);i++)
    {
        r=r ^v2[i+1];
    }
    if(r>maxm)maxm=r;}
}
int maxSubarrayXOR(int A[], int n)
{
    
    for(int i=0;i<pow(2,n);i++)
    {
        int j=i;
        vector <int> v;
        while(j)
        {
            v.push_back(j&1);
            j=j>>1;
        }
         vector<int> v2;
        for(int i=0;i<v.size();i++)
        {
           
            if(v[i]==1)
            v2.push_back(A[i]);
        }
        subs(v2);
    }
    cout<<maxm;
}
