#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void countsort(int a[], int n, int k)
{
    int i,b[100],count[100];
    for(int i=0 ;i<=k; i++)
    {
        count[i] = 0;
    }
    for(i=0;i<n;i++)
    {
        ++count[(a[i]/k)%10];
    }
    for(i=1;i<=k;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    for(i=n-1;i>=0;i--)
    {
        b[--count[((a[i]/k)%10)]] = a[i];
    }
    for(i=0;i<n;i++)
    {
        a[i]=b[i];
    }
}

void radixsort(int a[], int n)
{
    int k = 0,pos;
    for(int i=0; i<n; i++)
        k = max(k, a[i]);

    for(pos=1;k/pos > 0; pos*10)
    {
        countsort(a,n,pos);
    }
}
int main()
{
    int n,a[100],i;
    cout<<"enter size of array";
    cin>>n;
    cout<<"enter the elements";

    for(i=0;i<n;i++)
    {
    cin>>a[i];
    }
    radixsort(a,n);
    cout<<"Sorted Array is : ";
    for(i=0;i<n;i++)
    {
    cout<<a[i]<<" ";
    }
return 0;
}

