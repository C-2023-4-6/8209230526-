#include<iostream>
using namespace std;
class Student              //类声明
{
private:
	int num;
	char name[20];
	char sex;
public:                   //公用成员函数原型声明
	void display();
	Student();
	Student(int num, const char* name, char sex);
	void set_value();
};