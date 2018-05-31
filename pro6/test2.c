#include <stdio.h>
int CountSum(int nValue,int nCount)
{
    int n = 2;
    int nYu = n / 2;
    while(1)
    {
        int nRet = nValue / n;
        int nYuRet = nValue % n;
        if(nCount == n && n % 2 == 1 && nYuRet == 0)
        {
            return nRet;
        }
        if(nCount == n && n % 2 == 0 && nYuRet == nYu)
        {
            return nRet;
        }
        if(n++ > (nValue + 1) / 2)
        {
            return 0;
        }
        nYu = n / 2;
    }
    return 0;
}
int main()
{
    int value = 100;
    int count = 5;
    int ret = CountSum(value,count);
    printf("%d \n" ,ret);
    return 0;
}
