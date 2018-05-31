#include <stdio.h>
void my_shu(int array[],int size)
{
    int i = size - 1;
    int n = 0;//最终的数
    int sum = 0;
    for(i = size - 1;i > 0;--i)
    {
        int j = 0;
        for(;j < size;j++)
        {
            sum = array[j] * pow(10,i) + sum;
        }
    }

    
}
int main()
{
    int array[] = {3,32,321};
    int size = sizeof(array)/sizeof(array[0]);
    my_shu(array,size);
    return 0;
}

