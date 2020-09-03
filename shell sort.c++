 #include <iostream>
 #include<bits/stdc++.h>
 using namespace std;
void shellsort(int a[], int n)
{
  int i, j, gap;

  for(gap = n/2 ; gap >=1  ; gap=gap/2)
  {
    for(j = gap ; j < n ; j++)
    {
      for(i =j-gap ; i >= 0 ; i=i-gap)
      {
        if(a[i+gap] > a[i])
          break;
        else
          {
            int temp;
            temp=a[i+gap];
            a[i+gap]=a[i];
            a[i]=temp;
          }
      }
    }
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
    shellsort(a,n);
    cout<<"Sorted Array is : ";
    for(i=0;i<n;i++)
    {
    cout<<a[i]<<" ";
    }
return 0;
}

