#include <iostream>
#include <ctime>
using namespace std;

void outputDoubleArray(int arr[4][4])
{
	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			cout << arr[j][i] << " ";
		}
		cout << endl << endl;
	}
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
	int chisl;
	cin >> chisl;
	outputDoubleArray(arr);

	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			if (arr[j][i] < chisl)
			{
				arr[j][i] = chisl;
			}
		}
	}
	outputDoubleArray(arr);
}
