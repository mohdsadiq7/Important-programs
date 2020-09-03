#include<iostream>
using namespace std;
int a[10][10],reach[10],n;

int dfs(int v)
{
	int i;
	reach[v]=1;
	for(i=1;i<=n;i++)
	if(a[v][i] && reach[i]==0)
	{
		cout<<v<<i;
		dfs(i);
	}
}

int main()
{
	int i,j,count=0;
	cout<<"enter the no of vertices:\n";
	cin>>n;

	for(i=0;i<=n;i++)
	{
		reach[i]=0;
		for(j=0;j<=n;j++)
		a[i][j]=0;
	}

	cout<<"Enter the adjacency matrix:\n";
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	cin>>a[i][j];
	dfs(1);

	for(i=1;i<=n;i++)
	{
		if(reach[i])
		count++;
	}

	if(count==n)
	cout<<"graph is connected\n";
	else
	cout<<"graph is not connected\n";
}
