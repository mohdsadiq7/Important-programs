#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int p, int q, int r)
{
    int i,j,k;
    int n1,n2;

    n1=q-p+1;
    n2=r-q;

    int L[n1],R[n2];

    for(i=0;i<n1;i++)
    L[i]=a[p+i];

    for(j=0;j<n2;j++)
    R[j]=a[q+1+j];

    i=0;
    j=0;
    k=p;

    while(i<n1 && j<n2)
    {
        if(L[i] <= R[j])
        {
            a[k]=L[i];
            i++;
        }
        else
        {
             a[k]=R[j];
             j++;
        }
        k++;
    }

    while(i<n1)
    {
        a[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=R[j];
        j++;
        k++;
    }
}

void mergesort(int a[], int p, int r)
{
    if(p<r)
    {
        int q = p+(r-p)/2;
        mergesort(a,p,q);
        mergesort(a,q+1,r);
        merge(a,p,q,r);
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
    mergesort(a,0,n-1);

    cout<<"Sorted Array is : ";
    for(i=0;i<n;i++)
    {
    cout<<a[i]<<" ";
    }
    cout<<"\n";
    cout<<"Worst, Average and Best case :\Theta(nLogn)";

    return 0;
}
