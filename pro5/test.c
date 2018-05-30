#include <stdio.h>
#include<string.h>
#include<stdlib.h>
void sort(int array[], int size)
{
    if(size <= 1)
    {
        return;
    }
    int* b = (int*)malloc(sizeof(int) * size);
    int i = 0;
    int j = 0;
    for(;i < size ;++i)
    {
        if(array[i] % 2 == 1)
        {
            b[j++] = array[i];
        }
    }
    for(i = 0;i < size ;++i)
    {
        if(array[i] % 2 == 0)
        {
            b[j++] = array[i];
        }
    }
    memcpy(array,b,sizeof(int) * size);
}
int main()
{
    int array[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(array)/sizeof(array[0]);
    sort(array,size);
    int i = 0;
    for(;i < size; ++i)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}
