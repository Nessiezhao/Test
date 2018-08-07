#include <stdio.h>
void replaceSpace(char* str,int length)
{
    int oldlength;
    int blackcounts = 0;
    for(oldlength = 0;str[oldlength] != '\0';oldlength++){
        if(str[oldlength] == ' '){
            blackcounts++;
        }
    }
    int newlength = oldlength + 2 * blackcounts;
    if(newlength > length){
        return;
    }
    str[newlength] = '\0';
    int p1 = newlength - 1;
    int p2 = oldlength - 1;
    while(p2 >= 0 && p1 > p2)
    {
        if(str[p2] == ' '){
            str[p1--] = '0';
            str[p1--] = '2';
            str[p1--] = '%';
            p2--;
        }
        else{
            str[p1--] = str[p2];
            p2--;
        }
    }
}
int main()
{
    char str[] = {"We are students"};
    int size = 128;
    replaceSpace(str,size);
    printf("%s\n",str);
    return 0;
}
