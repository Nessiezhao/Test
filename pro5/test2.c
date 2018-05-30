#include <stdio.h>
#define ROW 4
#define COL 4
void my_print(int matrix[ROW][COL],int size,int row,int col)
{
    int x = 0;
    for(;x < row;++x)
    {
        int y = 0;
        for(;y < col;++y)
        {
            if(x == y)
            {
                _my_print(matrix,size,row,col,x);
            }
        }
    }
}
int main()
{
    int matrix [ROW][COL] = {{1,2,3,4},
                         {5,6,7,8},
                         {9,10,11,12},
                         {13,14,15,16}
                        };
    int size = sizeof(matrix)/sizeof(matrix[0][0]);
    my_print(matrix,size,ROW,COL);
    return 0;
}
