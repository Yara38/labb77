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

int midMathChislo(int* arr)
{

	int poloz = 0;
	int sum = 0;
	for (int i = 0; i < 2; i++)
	{
		if (arr[i] % 2 == 0)
		{
			poloz++;
			sum += arr[i];
		}
	}
	int mid = sum / poloz;
	return mid;
}

int main()
{
	setlocale(0, "");
	int arr[5][5];
	for (int i = 0; i < 2; i++)
	{
		inputArray(arr[i], i);
	}
	int mid;
	for (int i = 0; i < 2; i++)
	{
		mid = midMathChislo(arr[i]);
	}
	cout << "Среднее арифмиметическое = " << mid;
}
