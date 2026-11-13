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
	int smallest = arr[0];
	int seclargest = 0;
	int secsmallest = 0;
	bool foundSecondLargest = false;
	bool foundSecondSmallest = false;

	cout << "\nNumbers are : ";
	for (int j = 0;j < 10;j++)
	{
		cout << arr[j] << " , ";

		if (arr[j] > largest)
		{
			seclargest = largest;
			largest = arr[j];
			foundSecondLargest = true;
	}
		else if (arr[j] < largest && (!foundSecondLargest || arr[j] > seclargest))
		{
			seclargest = arr[j];
			foundSecondLargest = true;
		}

		if (arr[j] < smallest)
		{
			secsmallest = smallest;
			smallest = arr[j];
			foundSecondSmallest = true;
		}
		else if (arr[j] > smallest && (!foundSecondSmallest || arr[j] < secsmallest))
		{
			secsmallest = arr[j];
			foundSecondSmallest = true;
		}
	}
	cout << "\nLargest number is " << largest;
	if (foundSecondLargest)
	{
		cout << "\nSecond largest distinct number is " << seclargest;
	}
	else
	{
		cout << "\nNo second largest distinct number exists.";
	}
	cout << "\n\nSmallest number is " << smallest;
	if (foundSecondSmallest)
	{
		cout << "\nSecond smallest distinct number is " << secsmallest;
	}
	else
	{
		cout << "\nNo second smallest distinct number exists.";
	}
	return 0;

}