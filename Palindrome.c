#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,flag=0;
    char st[100];
    printf("Enter a string ");
    scanf("%s",st);
    n = strlen(st);
    for(i=0;i<n;i++)
    {
        if(st[i]!=st[n-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Not a palindrome");
    }
    else
    {
        printf("Palindrome");
    }
}