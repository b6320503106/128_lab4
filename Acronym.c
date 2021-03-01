#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char x[1000] , w[11][5]={"i","of","the","on","at","for","with","a","an","in","and"};
    char *p;
    int i=0,j,a=0;
    scanf("%[^\n]s",x);
    p=strtok(x," ");
    while(p!=NULL)
    {
        for(j=0;j<11;j++)
            if(strcmp(p,w[j]))
                a++;
        if(a==11||i==0)
            printf("%c",toupper(p[0]));
            p=strtok(NULL," ");
            i++, a=0;
    }
    return 0;
}
