#include <stdio.h>
#include <string.h>
int main()
{
    char* string = "Hello  World";
    char* p = string;
    int i = 0;
    int len = strlen(string);
    for(i = 0; i< len ;i++)
    {
        while(*p != ' ')
        {
            printf("%c",*p);
            i++;
            p++;
        }
        printf("%%20");
        p++;
    }
    printf("\n");
    return 0;
}
