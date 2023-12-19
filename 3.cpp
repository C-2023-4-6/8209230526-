#include<iostream>
using namespace std;
class cuboid
{
private:
	int length;//长
	int width;//宽
	int hight;//高
public:
	void sh()
	{
		cout << "长："; cin >> length;
		cout << "宽："; cin >> width;
		cout << "高："; cin >> hight;
	}
	int tj()
	{
		int sum;
		sum = length * width * hight;
		cout << "体积为："<<sum << endl;
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