#include <stdio.h>
#include<assert.h>
char* my_strcpy(char* dest,char* src)
{
    char* ret = dest;
    assert(dest);
    assert(src);
    while((*dest++ = *src++))
    {
        ;
    }
    return ret;
}
void* my_memcpy(char* dest,const char* src,size_t count)
{
    void* ret = dest;
    assert(dest);
    assert(src);
    while(count--)
    {
        *(char*)dest = *(char*)src;
        dest = (char*)dest + 1;
        src = (char*)src + 1;
    }
    return ret;
}
void* my_memmove(void* dest,const void* src,size_t count)
{
    void* ret = dest;
    assert(dest);
    assert(src);
    if(dest <= src || (char*)dest >= (char*)src + count)
    {
        while(count--)
        {
            *((char*)dest) = *((char*)src);
            dest = (char*)dest + 1;
            src = (char*)src + 1;
        }
    }
    else
    {
        dest = (char*)dest + count - 1;
        src = (char*)src + count - 1;
        while(count--)
        {
            *((char*)dest) = *((char*)src);
            dest = (char*)dest - 1;
            src = (char*)src - 1;
        }
    }
    return ret;
}
char* my_strcat(char* str1,const char* str2)
{
    char* cur = str1;
    assert(str1);
    assert(str2);
    while(*str1 )
    {
        str1++;
    }
    while((*str1++ = *str2++))
    {
        ;
    }
    return cur;
}
char* my_strstr(const char* str1,const char* str2)
{
    assert(str1);
    assert(str2);
    char* ptr1_slow = (char*)str1;
    char* ptr1_fast = NULL;
    char* ptr2 = (char*)str2;
    if(*str2 == '\0')
        return NULL;
    while(ptr1_slow)
    {
        ptr1_fast = ptr1_slow;
        ptr2  = (char*)str2;
        while((*ptr1_fast == *ptr2) && (*ptr2) && (*ptr1_fast))
        {
            ptr1_fast++;
            ptr2++;
        }
        if(*ptr2 == '\0')
        {
            return ptr1_slow;
        }
        ptr1_slow++;
    }
    return NULL;
}
int my_strcmp(const char* str1,const char* str2)
{
    assert(str1);
    assert(str2);
    int ret = 0;
    while(!(ret = *(unsigned char*)str1 - *(unsigned char*)str2) && *str1)
    {
        ++str1;
        ++str2;
    }
    if(ret < 0)
        ret = -1;
    if(ret > 0)
        ret = 1;
    return ret;
}
int my_atoi(char* arr)
{
    if(!arr)
        return -2;
    int sign = 1;
    int result = 0;
    while(*arr == ' ')
        arr++;
    if(*arr == '-')
    {
        sign = -1;
        arr++;
    }
    while((*arr) != '\0' && (*arr) >= '0' && (*arr) <= '9')
    {
        result = result * 10 + (*arr - '0');
        arr++;
    }
    if(*arr != '\0')
        return -2;
    return sign * result;
}
char* my_itoa(int num,char* str)
{
    int i = 0;
    int sign = num;
    if(sign < 0)
        num = -num;
    do
    {
        str[i++] = num%10 + '0';
    }while((num/=10) > 0);
    if(sign < 0)
    {
        str[i++] = '-';
    }
    str[i] = '\0';
    printf("%s\n",str);
    i = 0;
    int j = sizeof(str)-1;
    for(i,j;i<j;i++,j--)
    {
        char tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
    }
    return str;
}
void TestStrcpy()
{
    char a[] = "abcdefg";
    char b[] = "higklmn";
    char* c = my_strcpy(a,b);
    printf("higklmn\n");
    printf("%s\n",c);
}
void TestMemcpy()
{
    char a[] = "abcdefg";
    char b[] = "higklmn";
    void* c = my_memcpy(a,b,sizeof b);
    printf("higklmn\n");
    printf("%s\n",c);
}
void TestMemmove()
{
    char a[] = "abcdefg";
    char b[] = "higklmn";
    void* c = my_memmove(a,b,sizeof b);
    printf("higklmn\n");
    printf("%s\n",c);
}
void TestStrcat()
{
    char a[20] = "abcdefg";
    char b[] = "higklmn";
    char* c = my_strcat(a,b);
    printf("abcdefghigklmn\n");
    printf("%s\n",c);
}

void TestStrstr()
{
    char a[20] = "abcdefg";
    char b[] = "cde";
    char* c = my_strstr(a,b);
    printf("cdefg\n");
    printf("%s\n",c);
}
void TestStrcmp()
{
    const char a[] = "abcdefg";
    const char b[] = "abc";
    int c = my_strcmp(a,b);
    printf("%d\n",c);
}
void TestAtoi()
{
    char array[] = "   -12345";
    int a = my_atoi(array);
    printf("%d\n",a);
}
void TestItoa()
{
    int a = 123455;
    char array[1024] = {0};
    char* b = my_itoa(a,array);
    printf("%s\n",array);
}
int main()
{
//    TestStrcpy();
//    TestMemcpy();
//    TestMemmove();
//    TestStrcat();
//    TestStrstr();
//    TestStrcmp();
//    TestAtoi();
    TestItoa();
    return 0;
}
