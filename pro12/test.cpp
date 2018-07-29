#include <iostream>
#include<string>
using namespace std;
class Person
{
public:
    void Display()
    {
        std::cout<<_name<<std::endl;
    }
protected:
    string _name;
};
class Student : public Person
{
public:
    int _num;
};
void Test()
{
    Person p;
    Student s;
    p = s;
//    s = p;
    Person* p1 = &s;
    Person& r1 = s;
    Student* p2 = (Student*)&p;
    Student& r2 = (Student&)p;
    p2->_num = 10;
    r2._num = 20;
    std::cout<<p2->_num<<std::endl;
}
void Test1()
{
    Person p;
    Person* p1 = &p;
    Student* s2 = (Student*)p1;
    s2->_num = 10;
    std::cout<<s2->_num<<std::endl;
    Student s;
    s = (Student)p;
}
//class Person
//{
//public:
//    Person(const char* name = "",int id = 0)
//        :_name(name)
//         ,_num(id)
//    {}
//protected:
//    string _name;
//    int _num;
//};
//class Student:public Person
//{
//public:
//    Student(const char* name,int id,int stuNum)
//        :Person(name,id)
//         ,_num(stuNum)
//    {}
//    void DisplayNum()
//    {
//        std::cout<<"身份证号："<<Person::_num<<std::endl;
//        std::cout<<"学号："<<_num<<std::endl;
//    }
//protected:
//    int _num;
//};
//void Test(){
//    Student s1("paul",110,1);
//    s1.DisplayNum();
//}
//
int main()
{
//    Test();
    Test1();
    return 0;
}
