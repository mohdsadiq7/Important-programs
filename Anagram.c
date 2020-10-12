#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void lowercase(char[]);
void sort(char[]);

int main()
{
    char str1[]="bat";
    char str2[]="aaa";
    int i,j=0;
    if(strlen(str1) != strlen(str2))
    {
        printf("They are not Anagrams");
        return 0;
    }
    else
    {
        lowercase(str1);
        lowercase(str2);
        sort(str1);
        sort(str2);
        for(i=0;i<strlen(str1);i++)
        {
            if(str1[i] != str2[i])
            {
                printf("Both the strings are not Anagrams");
                return 0;
            }
        }
        printf("Strings are Anagrams");
    }
    return 0;
}

void lowercase(char a[])
{
    int c;
    for(c=0;c<strlen(a)-1;c++)
    {
        a[c]=a[c]+32;
    }
}

void sort(char a[])
{
    int k,l;
    int temp=0;
    for(k=0;k<strlen(a)-1;k++)
    {
        for(l=k+1;l<strlen(a);l++)
        {
            if(a[k]>a[l])
               {
                   temp=a[k];
                   a[k]=a[l];
                   a[l]=temp;
               }
        }
    }
}
