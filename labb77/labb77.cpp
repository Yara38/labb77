#include <iostream>
using namespace std;


int* inputArray(int* arr, int el)
{
	for (int i = 0; i < 2; i++)
	{
		cout << "Введите " << i << " элемент " << el << "-ого массива" << endl;
		cin >> arr[i];
	}
	return arr;
}

int findMinEL(int* arr, int el, int max)
{
	for (int i = 0; i < 2; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}

int main()
{
	setlocale(0, "");
	int arr[5][5];//массив
	for (int i = 0; i < 2; i++)
	{
		inputArray(arr[i], i);
	}
	int max = -9999999;
	for (int i = 0; i < 2; i++)
	{
		max = findMinEL(arr[i], i, max);
	}
	cout << "Максимальное число массива = " << max << endl;
}
