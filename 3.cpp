#include<iostream>
using namespace std;
class cuboid
{
private:
	int length;//��
	int width;//��
	int hight;//��
public:
	void sh()
	{
		cout << "����"; cin >> length;
		cout << "��"; cin >> width;
		cout << "�ߣ�"; cin >> hight;
	}
	int tj()
	{
		int sum;
		sum = length * width * hight;
		cout << "���Ϊ��"<<sum << endl;
		return sum;
	}
};
int main()
{
	cuboid cub1, cub2, cub3;
	cub1.sh();cub1.tj();
	cub2.sh();cub2.tj();
	cub3.sh();cub3.tj();
}