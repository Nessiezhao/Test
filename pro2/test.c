#include <stdio.h>
#include<string.h>
int main()
{
    char* str = "++213134413" ;
    char* p = str;
        if((*p >=48 && *p <= 57) ||(*p == 43) ||( *p == 45 ))
        {
            p++;
            while(*p != '\0')
            {
                if((*p >= 48 && *p <= 57))
                {
                    p++;
                }
                else
                {
                    break;
                }
            }
        }
    if(*p == '\0')
    {
        p = str;
        while(*p != '\0')
        {
            if(*p != 45 && *p != 43)
            {
                printf("%c",*p);
            }
            p++;
        }
        printf("\n");
    }
    else
    {
        printf("0\n");
    }
    return 0;
}
