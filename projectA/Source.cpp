#include<math.h>
#include<iostream>
using namespace std;

struct LOL
{
	string name[5];
	int point[5];
};

float xbar(int a)
{
	float sum = a/3;
	printf("\n Xbar is %.2f", sum);
	return sum;
}

int main()
{
	struct LOL p1;
	
	for (int i=0;i<3;i++)
	{
		cin >> p1.name[i] >> p1.point[i];
		
	}
	int pop = p1.point[0] + p1.point[1] + p1.point[2];
	if (1)
	{
		if (p1.point[0] > p1.point[1] && p1.point[0] > p1.point[2])
		{
			cout << "\nName : " << p1.name[0] << "  Point :" << p1.point[0];
			if (p1.point[1] > p1.point[2])
			{
				cout << "\nName : " << p1.name[1] << "  Point :" << p1.point[1];
				cout << "\nName : " << p1.name[2] << "  Point :" << p1.point[2];
			}
			else
			{
				cout << "\nName : " << p1.name[2] << "  Point :" << p1.point[2];
				cout << "\nName : " << p1.name[1] << "  Point :" << p1.point[1];
			}

		}

		if (p1.point[1] > p1.point[0] && p1.point[1] > p1.point[2])
		{
			cout << "\nName : " << p1.name[1] << "  Point :" << p1.point[1];
			if (p1.point[0] > p1.point[3])
			{
				cout << "\nName : " << p1.name[0] << "  Point :" << p1.point[0];
				cout << "\nName : " << p1.name[2] << "  Point :" << p1.point[2];
			}
			else
			{
				cout << "\nName : " << p1.name[3] << "  Point :" << p1.point[3];
				cout << "\nName : " << p1.name[0] << "  Point :" << p1.point[0];
			}

		}

		if (p1.point[2] > p1.point[0] && p1.point[2] > p1.point[1])
		{
			cout << "\nName : " << p1.name[2] << "  Point :" << p1.point[2];
			if (p1.point[0] > p1.point[1])
			{
				cout << "\nName : " << p1.name[0] << "  Point :" << p1.point[0];
				cout << "\nName : " << p1.name[1] << "  Point :" << p1.point[1];
			}
			else
			{
				cout << "\nName : " << p1.name[1] << "  Point :" << p1.point[1];
				cout << "\nName : " << p1.name[0] << "  Point :" << p1.point[0];
			}
		}
	}
	xbar(pop);
	


	
	return 0;
}