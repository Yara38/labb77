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

int findSumElHeadDiag(int arr[4][4])
{
	int diag = -1;//переменные
	int sum_diag = 0;
	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			if (diag + 1 == i)
			{
				sum_diag += arr[j][i];
				diag++;
				break;
			}
		}
	}
	return sum_diag;
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
	int sum_diag = findSumElHeadDiag(arr);
	cout << "Сумма диагонали = " << sum_diag << endl;
}
