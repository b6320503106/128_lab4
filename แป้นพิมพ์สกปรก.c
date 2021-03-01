#include<stdio.h>
#include<string.h>
int main()
{
    int n,j;
    char x[200];
    scanf("%s" ,x);
    n=strlen(x);
    for(j=0;j<n;j++)
    {
        if(x[j-1]!=x[j])
        {
            printf("%c" ,x[j]);
        }
    }
    return 0;
}
