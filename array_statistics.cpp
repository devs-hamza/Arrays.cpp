#include <iostream>
using namespace std;
int main()
{
	int arr[10];
	for (int i = 0;i < 10;i++)
	{
		cout << "Enter the number " << i+1 <<" : ";
		cin >> arr[i];
	}

	int largest = arr[0];
	int smallest = arr[0];
	int sum = 0;
	int even = 0;
	int odd = 0;
	cout << "\nNumbers are : ";
	for (int j = 0;j < 10;j++)
	{
		cout << arr[j] << " ";

		if (arr[j] > largest)
		{
			largest = arr[j];
		}

		if (arr[j] < smallest)
		{
			smallest = arr[j];
		}

		if (arr[j] % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}

		sum += arr[j];
	}
	cout << "\nLargest number is " << largest;
	cout << "\nSmallest number is " << smallest;
	cout << "\n" << even << " numbers are even";
	cout << "\n" << odd << " numbers are odd";
	cout << "\nSum is " << sum;
	return 0;
}