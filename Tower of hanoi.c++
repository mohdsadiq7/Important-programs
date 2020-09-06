#include<iostream>
using namespace std;
int count=0;
void toh(int n,char from,char aux,char to)
{
if(n==1)
{
count++;
cout<<" move disk "<<n<<" from "<<from<<" to "<<to<<endl;
return;
}
toh(n-1,from,to,aux);
count++;
cout<<" move disk "<<n<<" from "<<from<<" to "<<to<<endl;
toh(n-1,aux,from,to);
}
int main()
{
int n;
cout<<"enter the number of disc"<<endl;
cin>>n;
toh(n,'A','B','c');
cout<<"count"<<count;
return 0;
}
