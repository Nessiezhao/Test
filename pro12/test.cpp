#include <iostream>
#include<string>
using namespace std;
class Person
{
public:
    Person(const char* name = "",int id = 0)
        :_name(name)
         ,_num(id)
    {}
protected:
    string _name;
    int _num;
};
class Student:public Person
{
public:
    Student(const char* name,int id,int stuNum)
        :Person(name,id)
         ,_num(stuNum)
    {}
    void DisplayNum()
    {
        std::cout<<"身份证号："<<Person::_num<<std::endl;
        std::cout<<"学号："<<_num<<std::endl;
    }
protected:
    int _num;
};
void Test(){
    Student s1("paul",110,1);
    s1.DisplayNum();
}

int main()
{
    Test();
    return 0;
}
