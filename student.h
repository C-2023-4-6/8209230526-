#include<iostream>
using namespace std;
class Student              //������
{
private:
	int num;
	char name[20];
	char sex;
public:                   //���ó�Ա����ԭ������
	void display();
	Student();
	Student(int num, const char* name, char sex);
	void set_value();
};