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

for(i=0;i<n;i++)
{
    int temp;
    for(j=0;j<n-i-1;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}

cout<<"Sorted Array is : ";
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
cout<<"\n";
cout<<"Worst case : O[n*n]"<<"\n";
cout<<"Average case : O[n*n]"<<"\n";
cout<<"Best case : O[n]"<<"\n";
return 0;
}
