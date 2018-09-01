#include <stdio.h>
int main()
{
    int c = 1;
    char i = c;
    if(i == 1)
    {
        printf("小端\n");
    }
    else
    {
        printf("大端\n");
    }
    return 0;
}
