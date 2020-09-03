#include<stdio.h>

int a[20][20],i,j,n,k,count=0;

void tsort()
{
    int indeg[100],flag[100];
    for(i=0;i<n;i++)
    {
        indeg[i]=0;
        flag[i]=0;
    }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            indeg[i]=indeg[i]+a[i][j];
        }
    }
    printf("Topological Sort is : ");
    while(count<n)
    {
        for(k=0;k<n;k++)
        {
            if((indeg[k]==0)&&(flag[k]==0))
            {
                printf("%d",(k+1));
                flag[k]=1;
            }
            for(i=0;i<n;i++)
            {
                if(a[i][k]==1)
                {
                    indeg[k]--;
                }
            }
        }
        count++;
    }
}

int main()
{
printf("enter the no of vertices:\n");
scanf("%d",&n);
printf("enter the adjacency matrix:\n");
for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
        printf("\n Enter a[%d][%d] : ",i,j);
        scanf("%d",&a[i][j]);
    }
}
tsort();
return 0;
}

