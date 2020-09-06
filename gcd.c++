#include<iostream>
#include<stdlib.h>
using namespace std;
int gcd(int u,int v)
{
return(v!=0)?gcd(v,u%v):u;
}
int main(void)
{
int num1,num2,result,count=0;
cout<<"enter two number to find GCD using eculidean algorithm:";
cin>>num1>>num2;
result=gcd(num1,num2);
count++;
if(gcd)
cout<<"\n the GCD of"<<num1<<"and"<<num2<<"is:"<<result<<endl;
else
cout<<"\n invalid input!!!\n";
cout<<"count="<<count;
return 0;
}
