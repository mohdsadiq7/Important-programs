#include<bits/stdc++.h>
#include<math.h>
#include<iostream>
using namespace std;

int is(int a[],int low,int high,int key)
{

    while(low<=high)
    {

        if (low == high)
        {
            if (a[low] == key)
            {
                return low;
            }
            return -1;
        }

        int pos = low + (((double)(high - low) /
            (a[high] - a[low])) * (key - a[low]));

        if(a[pos]==key)
        {
            return pos;
        }

        if(a[pos]<key)
        {
            low=pos+1;
        }
        else
        {
            high=pos-1;
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

flag = is(a,0,n-1,key);

if(flag==-1)
{
    cout<<"key not found";
}
else
cout<<"key found at index : "<<flag;
cout<<"\n";
cout<<"If Uniformly distributed : O(log logn)\n";
cout<<"Worst case : O(n)\n";
return 0;
}



