#include<iostream>
#include<string>
using namespace std;
int main()
{
    //They are student
    //aeiou
    string str1;
    string str2;
    cin.getline(str1,sizeof(str1));
    cin.getline(str2,sizeof(str2));
    int i = 0;
    for(i = 0;i < str2.size();++i)
    {

    }
    return 0;
}

//#include <stdio.h>
//#include<string.h>
//#include<unistd.h>
//#include<iostream>
//using namespace std;
//int main()
//{
//    char str1[1024] ;
//    char str2[1024];
//    cin.getline(str1,sizeof(str1));
//    cin.getline(str2,sizeof(str2));
//    char* ps1 = str1;
//    char* ps2 = str2;
//    int len = sizeof(str1);
//    int i = 0;
//    //They are student
//    //aeiou
//    for(i = 0;i < len ;++i)
//    {
//        while(*ps2 != '\0')
//        {
//            if(*ps1 == *ps2)
//            {
//                int j = 0;
//                for(j = i;j < len;j++)
//                {
//                    str1[j] = str1[j+1];
//                }
//                ps2 = str2;
//                len--;
//                continue;
//            }
//            else if(*ps1 == ' ')
//            {
//                ps1++;
//            }
//            else
//            {
//                ps2++;
//            }
//         }
//        ps2 = str2;
//        ++ps1;
//    }
//    printf("%s\n",str1);
//    return 0;
//}
