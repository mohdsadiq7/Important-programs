#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int partition(int a[], int p, int r)
{
    int x,i,j,temp;
    x=a[r];
    i=p-1;
    for(j=p;j<=r-1;j++)
    {
        if(a[j]<=x)
        {
            i=i+1;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[i+1];
    a[i+1]=a[r];
    a[r]=temp;
    return (i+1);
}

void quicksort(int a[], int p, int r)
{
    int q;
    if(p<r)
    {
        q = partition(a,p,r);
        quicksort(a,p,q-1);
        quicksort(a,q+1,r);
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

    quicksort(a,0,n-1);

    cout<<"Sorted Array is : ";
    for(i=0;i<n;i++)
    {
    cout<<a[i]<<" ";
    }
    cout<<"\n";
    cout<<"Best case : theta(nLogn) - from recurrences using master theorem"<<"\n";
    cout<<"Worst case : theta(n2) - from recurrences using master theorem"<<"\n";
    cout<<"Average case : O(nLogn) - from recurrences using master theorem"<<"\n";

return 0;
}
