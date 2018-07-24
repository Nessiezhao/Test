#include <stdio.h>
struct S3
{
    double d;
    char c;
    int i;
};

struct S4
{
    char c1;
    struct S3 s3;
    double d;
};

int main()
{
    printf("%d\n",sizeof(struct S4));
    return 0;
}
