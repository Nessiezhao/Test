#include <stdio.h>
union Un
{
    int i;
    char c;
};
union Un1
{
    char c[5];
    int i;
};
union Un2
{
    short c[7];
    int i;
};
union ip_addr
{
    unsigned long addr;
    struct
    {
        unsigned char c1;
        unsigned char c2;
        unsigned char c3;
        unsigned char c4;
    }ip;
};
int main()
{
    union Un un;
//    printf("%d\n",&(un.i));
//    printf("%d\n",&(un.c));
    un.i = 0x11223344;
    un.i = 0x55;
 //   printf("%x\n",un.i);
//    printf("%d\n",sizeof(union Un1));
//    printf("%d\n",sizeof(union Un2));
    union ip_addr my_ip;
    my_ip.addr = 176238749;
    printf("%d.%d.%d.%d\n",my_ip.ip.c4,my_ip.ip.c3,my_ip.ip.c2,my_ip.ip.c1);
    
    return 0;
}

//struct A
//{
//    int _a:2;
//    int _b:5;
//    int _c:10;
//    int _d:30;
//};
//struct S
//{
//    char a:3;
//    char b:4;
//    char c:5;
//    char d:4;
//};
//int main()
//{
// //   printf("%d\n",sizeof(struct A));
//    struct S s = {0};
//    s.a = 10;
//    s.b = 12;
//    s.c = 3;
//    s.d = 4;
//
//    printf("%d\n",sizeof(struct S));
//    return 0;
//}
//struct S3
//{
//    double d;
//    char c;
//    int i;
//};
//
//struct S4
//{
//    char c1;
//    struct S3 s3;
//    double d;
//};
//struct S1
//{
//    char c1;
//    int i;
//    char c2;
//};
//
//struct S2
//{
//    char c1;
//    char c2;
//    int i;
//};
//
//struct A
//{
//    char a;
//    int b;
//    double c;
//};
//struct B
//{
//    char x;
//    struct A* p;
//    struct A arr[5];
//    double y;
//    int z;
//    char arr1[3];
//    double e;
//};
//int main()
//{
//    int *a = NULL;
//    printf("%d\n",sizeof(a));
//    printf("%d\n",sizeof(struct A));
//    printf("%d\n",sizeof(struct B));
//    return 0;
//}
