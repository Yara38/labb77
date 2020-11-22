#include <iostream>
#include <ctime>
using namespace std;

void outputDoubleArray(int arr[4][4], int n)
{
	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			cout << arr[j][i] << " ";
		}
		cout << endl << endl;
	}
	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			if (arr[j][i] > n)
			{
				cout << "\nНомер: [" << j << "]" << "[" << i << "]";
			}
		}
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
	int n;
	cin >> n;
	outputDoubleArray(arr, n);
}
