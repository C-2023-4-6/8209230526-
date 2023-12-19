#include <iostream>
#include"student.h  "          //不要漏写此行，否则编译通不过
void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}
Student::Student(int num, const char* name, char sex) {
	this->num = num;
	strcpy_s(this->name, name);
	this->sex = sex;
}
Student::Student() {

}
void Student::set_value()
{
	cin >> num;
	cin >> name;
	cin >> sex;
}