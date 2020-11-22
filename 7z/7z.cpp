#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(0, "");
	int a, b;
	cin >> a;
	cin >> b;
	int product = a * b;
	int treh = product;
	int count = 0;
	cout << product / 1000;
	for (int i = 0; treh != 0; i++)
	{
		treh = treh / 10;
		count++;
	}
	if (count == 3)
	{
		cout << " Число трёхзначное";
	}
	else
	{
		cout << " Число не трёхзначное";
	}
}
