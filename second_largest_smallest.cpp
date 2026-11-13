#include <iostream>
using namespace std;
int main()
{
	int arr[10];
	int i = 0;
	while (i < 10)
	{
		cout << "Enter number " << i + 1 << " : ";
		cin >> arr[i];
		i++;
	}

	int largest = arr[0];
	int seclargest = arr[0];
	int smallest = arr[0];
	int secsmallest = arr[0];
	cout << "\nNumbers are : ";
	for (int j = 0;j < 10;j++)
	{
		cout << arr[j] << " , ";

		if (arr[j] > largest)
		{
			seclargest = largest;
			largest = arr[j];
		} 
		else if (arr[j] > seclargest && arr[j] != largest)
		{
			seclargest = arr[j];
		}

		if (arr[j] < smallest)
		{
			secsmallest = smallest;
			smallest = arr[j];
		}
		else if (arr[j] < secsmallest && arr[j] != smallest)
		{
			secsmallest = arr[j];
		}
	}
	cout << "\nLargest number is " << largest;
	cout << "\nSecond largest number is " << seclargest;
	cout << "\n\nSmallest number is " << smallest;
	cout << "\nSecond smallest number is " << secsmallest;


	return 0;

}