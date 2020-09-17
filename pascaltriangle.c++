#include<bits/stdc++.h>
using namespace std;

int pascal(int n);
int build(int n, int k);

int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    pascal(n);
    return 0;
}

int pascal(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<" "<<build(i,j);
        }
        cout<<"\n";
    }
}

int build(int n, int k)
{
    int res=1,i;
    if(k>n-k)
    {
        k=n-k;
    }
    for(i=0;i<k;++i)
    {
        res*= (n-i);
        res/= (i+1);
    }
    return res;
}
