#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    //They are student
    //aeiou
    string s1;
    string s2;
    getline(cin,s1);
    getline(cin,s2);
    size_t i = 0;
    size_t j = 0;
    int flag[256] = {0};
    for(i = 0;i < s2.size();++i)
    {
        flag[s2[i] - '0'] = 1;
    }
    for(j = 0;j < s1.size();++j)
    {
        if(flag[s1[j] - '0'] == 1)
        {
            s1 = s1.erase(j,1);
        }
    }
    cout<<s1<<endl;
    return 0;
}

