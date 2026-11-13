#include <iostream>
using namespace std;
int main()
{
	int arr[30] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,45,20,21,22,23,24,25,26,27,28,29,30 };
	cout << "Enter the element you want to search : ";
	int element;
	cin >> element;


	bool sort = true;
	for (int i = 0;i < 29;i++)
	{
		if (arr[i] > arr[i + 1])
		{
			sort = false;
			break;
		}
	}
	if (sort)
	{
		cout << "\nArray is sorted";
	}
	else
	{
		cout << "\nArray is not sorted";
	}

	int linear = 0;
	bool lfound = false;
	for (int i = 0;i < 30;i++)
	{
		if (arr[i] == element)
		{
			cout << "\nElement founded through linear on index : " << i;
			lfound = true;
			break;
		}
		linear++;
	}
	if (lfound != true)
	{
		cout << "\nElement not founded!!";
	}

	int binary = 0;
	if(sort)
	{
		bool bfound = false;
		int low = 0, high = 29;
		while (low <= high)
		{
			int middle = (low + high) / 2;
			if (arr[middle] == element)
			{
				cout << "\n\nElement founded through binary on index : " << middle;
				bfound = true;
				break;
			}
			else if (arr[middle] > element)
			{
				high = middle - 1;
			}
			else
			{
				low = middle + 1;
			}
			binary++;
		}
		if (bfound != true)
		{
			cout << "\nElement not founded!!";
		}
	}
	else
	{
		cout << "\nArray needs to be sorted so no binary search";
	}
	
	cout << "\n\nSearching iterations through binary : " << binary;
	cout << "\nSearching iterations through linear : " << linear;

	
	return 0;
}