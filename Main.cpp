#include<iostream>
using namespace std;

int main()
{
	int number;
	cout << "How many triangles do you have to check? " << endl;
	cin >> number;

	int side1;
	int side2;
	int side3;
	cout << "What are the measures of the sides?" << endl;
	cin >> side1;
	cin >> side2; 
	cin >> side3;
	if (side1 == side2 && side2 == side3)
	{
		cout << "That triangle is equilateral" << endl;
	}
	 if (side1 == side2 && side2 != side3)
	{
		cout << "This triangle is isosceles" << endl;
	}
	if (side1 != side2 && side2 != side3)
	{
		cout << "This triangle is scalene" << endl;
	}
	return 0;
}
