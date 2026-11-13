#include <iostream>
using namespace std;
int main()
{
	int arr[25] = { -12,0,21,88,45,3,75,78,87,87,4,3,324,6,0,4,9,-78,77,91,-24,12,34,-54,34 };
	int positive = 0;
	int negative = 0;
	int even = 0;
	int odd = 0;
	int zero = 0;
	for (int i = 0; i < 25;i++)
	{
		cout << arr[i] << " ";
		if (arr[i] % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}

		if (arr[i] > 0)
		{
			positive++;
		}
		else if (arr[i] == 0)
		{
			zero++;
		}
		else
		{
			negative++;
		}

	}
	cout << "\nPositive numbers are : " << positive;
	cout << "\nNegative numbers are : " << negative;
	cout << "\nEven numbers are : " << even;
	cout << "\nOdd numbers are : " << odd;
	cout << "\nZeros are : " << zero;


	int duplicate = 0;
	for (int i = 0;i < 25;i++)
	{

		for (int j = i + 1;j < 25;j++)
		{
			if (arr[i] == arr[j])
			{
				duplicate++;
			}
		}
	}
	cout << "\n\nNumber of duplicate pairs are : " << duplicate;


	bool isort = true;
	for (int i = 0;i < 24;i++)
	{
		if (arr[i] >= arr[i + 1])
		{
			isort = false;
			break;
		}
	}
	if (isort)
	{
		cout << "\nArray is sorted in strictly increasing order";
	}
	else
	{
		cout << "\nArray is not sorted in increasing order";
	}
	bool dsort = true;
	for (int i = 0;i < 24;i++)
	{
		if (arr[i] <= arr[i + 1])
		{
			dsort = false;
			break;
		}
	}
	if (dsort)
	{
		cout << "\nArray is sorted in strictly decreasing order";
	}
	else
	{
		cout << "\nArray is not sorted in strictly decreasing order";
	}

	return 0;
}
		
