#include<iostream>
using namespace std;
class score 
{
private:
	int num;
	int sco;
public:
	score(int num, int sco);
	 friend void max(score*);//²»¶®
};
score::score(int num, int sco)
{
	this->num = num;
	this->sco = sco;
}
void max(score*p)
{
	score* x=p;
	int temp;
	temp = p->sco;
	for (int i = 0; i < 5; i++)
	{
		if (temp < (p + i)->sco)
		{
			temp = (p + i)->sco;
			x = (p + i);
		}
	}
	cout << x->num;
}
int main()
{
	score stu[5] = {
		score(001,96),
		score(002,98),
		score(003,95),
		score(004,83),
		score(005,92),
	};
	score* p = stu;
	max(p);
}