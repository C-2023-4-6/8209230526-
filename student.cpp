#include <iostream>
#include"student.h  "          //��Ҫ©д���У��������ͨ����
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
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