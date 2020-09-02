#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void heapsort(int a[], int n);
void heapify(int a[],int n, int i);
void swap(int* a, int* b);

int main()
{
    int n,i;
    cout<<"enter size of array";
    cin>>n;
    int a[n];
    cout<<"enter the elements";
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    }
    heapsort(a,n);
    cout<<"Sorted Array is : ";
    for(i=0;i<n;i++)
    {
    cout<<a[i]<<" ";
    }
}

void heapsort(int a[], int n)
{
    int i;
    for(i = n/2 - 1; i >= 0; i--)
        heapify(a, n, i);
    for(i = n-1; i >= 0; i--)
    {
        swap(&a[0], &a[i]);
        heapify(a, i, 0);
    }
}
void heapify(int a[], int n, int i)
{

    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    if(l < n && a[l] > a[largest])
        largest = l;
    if(r < n && a[r] > a[largest])
        largest = r;
    if(largest != i)
    {
        swap(&a[i], &a[largest]);
        heapify(a, n, largest);
    }
}
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


