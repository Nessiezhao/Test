#include <stdio.h>
int main()
{
    int count = 100000;//共有100000次
    int x = 0;
    scanf("%d",&x);
    if(x < 1 || x > 1000000006)
    {
        printf("输入的起始位置超出范围！\n");
        return 0;
    }
    int eat = 1000000007;
    int tmp = count;
    int result = 0;
    int x1 = 0;
    int x2 = 0;
    while(tmp--)
    {
        if(x == eat)
        {
            result = count-tmp;
            break;
        }
        x1 = 4 * x + 3;
        x2 = 8 * x + 7;
        if(x1 > eat && x2 > eat) 
        {
            eat = eat * 2;
        }
        else if(x1 == eat || x2 == eat)
        {
            result = count -tmp;
            break;
        }
        x = x1;
    }
    printf("%d\n",result);
    return 0;
}
