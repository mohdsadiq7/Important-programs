#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,a[100],i,key,flag;
cout<<"enter size of array";
cin>>n;
cout<<"enter the elements";

for(i=0;i<n;i++)
{
    cin>>a[i];
}

cout<<"Enter the key to find : ";
cin>>key;

for(i=0;i<n;i++)
{
    if(a[i]==key)
    {
        cout<<"Key found at index : "<<i;
        flag=1;
    }
}
if(flag!=1)
{
    cout<<"key not found";
}
cout<<"\n";
cout<<"Time complexity is : O(n)";
return 0;
}
