#include <iostream>
#include <ctime>
using namespace std;

void outputDoubleArray(int arr[4][4])
{
	int nechet = 0;
	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			cout << arr[j][i] << " ";
			if (arr[j][i] % 2 != 0)
			{
				nechet++;
			}
		}
		cout << endl << endl;
	}
	cout << "Количество нечётных элементов = " << nechet;
}
int main()
{
	setlocale(0, "");
	srand(time(0));
	int arr[4][4];
	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			arr[j][i] = -20 + rand() % (20 + 20);
		}
	}
	outputDoubleArray(arr);
}
