#include <stdio.h>
//判断一个二维数组中，是否存在一个数
//这个二维数组每行的从左到右的数值变大
//每列的从上到下的数值变大
#define ROW 3
#define COL 3
int IsExist(int array[ROW][COL],int row,int col,int x)
{
    if(x < array[0][0] || x > array[row-1][col-1])
    {
        return 0;
    }
    row = 0;
    col = col-1;
    while(row < ROW && col >= 0)
    {
        if(x > array[row][col])
        {
            row++;
        }
        if(x < array[row][col])
        {
            col--;
        }
        if(x == array[row][col])
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int array[ROW][COL] = {{1,2,3},
                       {4,5,6},
                       {7,8,9}
                      };
    int x = 0;
    scanf("%d",&x);
    int ret = IsExist(array,ROW,COL,x);
    if(ret == 0)
    {
        printf("没找到\n");
    }
    else
    {
        printf("找到了\n");
    }
    return 0;
}
