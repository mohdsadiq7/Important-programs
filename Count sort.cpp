#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void countsort(int a[], int n)
{
    int i,b[100],count[100];
    int k = 0;

    for(int i=0; i<n; i++)
    {
        k = max(k, a[i]);
    }
    for(int i=0 ;i<=k; i++)
    {
        count[i] = 0;
    }
    for(i=0;i<n;i++)
    {
        ++count[a[i]];
    }
    for(i=1;i<=k;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    for(i=n-1;i>=0;i--)
    {
        b[--count[a[i]]] = a[i];
    }
    for(i=0;i<n;i++)
    {
        a[i]=b[i];
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
    countsort(a,n);
    cout<<"Sorted Array is : ";
    for(i=0;i<n;i++)
    {
    cout<<a[i]<<" ";
    }
return 0;
}
