#include <stdio.h>
#include<ctype.h>
void recv(char* start,char* end)
{
    while(start < end)
    {
        char tmp = 0;
        tmp = *start;
        *start = *end;
        *end = tmp;
        end--;
        start++;
    }
}
void converse(char array[])
{
    char* fast = array;
    char* slow = array;
    while(*fast != '\0')
    {
        if(isspace(*fast))
        {
            recv(slow,fast-1);
            fast++;
            slow = fast;
        }
        else
        {
            fast++;
        }
    }
    recv(slow,fast-1);
    recv(array,fast-1);
}
int main()
{
    char array[] = "I like beijing.";
   // int size = sizeof(array)/sizeof(array[0]);
    converse(array);
    printf("%s\n",array);
    return 0;
}

