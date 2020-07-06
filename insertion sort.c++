#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
int a[100],n,i,j,key;
cout<<"enter size of array";
cin>>n;
cout<<"enter the elements";
for(i=0;i<n;i++)
{
    cin>>a[i];
}

for(i=1;i<n;i++)
{
    key=a[i];
    j=i-1;
    while(j>=0 && a[j]>key)
    {
        a[j+1]=a[j];
        j=j-1;
    }
    a[j+1]=key;
}

cout<<"Sorted Array is : ";
for(i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
cout<<"\n";
cout<<"Worst case : O[n*n]"<<"\n";
cout<<"Best case : Ω[n]"<<"\n";

return 0;
}
