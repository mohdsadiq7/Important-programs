#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int n,a[100],i,j;
    cout<<"enter size of array";
    cin>>n;
    cout<<"enter the elements";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n-1;i++)
    {
        int min= i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
                {
                    min=j;
                }
        }
        if(min!=i)
        {
            int temp;
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }

    cout<<"Sorted Array is : ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    cout<<"Worst case : O[n*n]"<<"\n";
    cout<<"Best case : O[n*n]"<<"\n";


}


