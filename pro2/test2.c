#include <stdio.h>
#include<string.h>
#include<stdlib.h>
void change(char* a,int sz,int x)
{
    char* b = (char* )malloc(2*sz+1);
    if(!b)
    {
        return ;
    }
    else
    {
        x %= sz;
        strcpy(b,a);
        strcat(b,a);
        strncpy(a,b+1,x);
    }
}
int main()
{
    char src[] = "ABCDEFG";
    int sz = strlen(src);
    int x = 0;
    scanf("%d",&x);
    change(src,sz,x);
    printf("%s\n",src);
    return 0;
}
