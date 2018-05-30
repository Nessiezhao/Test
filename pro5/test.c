#include <stdio.h>
#include<stdlib.h>
void Swap(int* a,int* b)
{
    int tmp = *b;
    *b = *a;
    *a = tmp;
    return;
}
int* sort(int array[], int size)
{
    if(size <= 1)
    {
        return NULL;
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
    return b;
}
int main()
{
    int array[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(array)/sizeof(array[0]);
    int* b = sort(array,size);
    int i = 0;
    for(;i < size; ++i)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    return 0;
}
