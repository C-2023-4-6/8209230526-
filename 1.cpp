#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:          // ���ݳ�ԱΪ˽�е�
	int hour;
	int minute;
	int sec;
public:
	void sh()
	{
		cin >> hour;      //�����趨��ʱ�� 
		cin >> minute;
		cin >> sec;
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;           //����t1ΪTime�����
	t1.sh();
	return 0;
}