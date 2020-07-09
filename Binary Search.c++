#include<bits/stdc++.h>
#include<math.h>
#include<iostream>
using namespace std;

int bs(int a[],int low,int high,int key)
{
    int mid;
    while(low<=high)
    {
        mid=low+(high-low)/2;

        if(a[mid]==key)
        {
            return mid;
        }

        if(a[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;
}

int main()
{
int n,a[100],i,key,flag;
cout<<"enter size of array";
cin>>n;
cout<<"enter the elements in sorted manner ";

for(i=0;i<n;i++)
{
    cin>>a[i];
}

cout<<"Enter the key to find : ";
cin>>key;

flag = bs(a,0,n-1,key);

if(flag==-1)
{
    cout<<"key not found";
}
else
cout<<"key found at index : "<<flag;
cout<<"\n";
cout<<"Time complexity is : O(logn)";

return 0;
}


