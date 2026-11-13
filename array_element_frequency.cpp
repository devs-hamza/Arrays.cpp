#include <iostream>
using namespace std;
int main()
{
	int arr[10];
	for (int i = 0;i < 10;i++)
	{
		cout << "Enter the number " << i + 1 << " : ";
		cin >> arr[i];
	}

	cout << "\nNumbers are : ";
	for (int m = 0;m < 10;m++)
	{
		cout <<  arr[m] << " ";
	}


	bool array[10] = { false };
	for (int j = 0;j < 10;j++)
	{
		if (array[j] == true)
		{
			continue;
		}
		int count = 0;
		for (int k = 0;k < 10;k++)
		{
			if (arr[k] == arr[j])
			{
				count++;
				array[k] = true;
			}
		}
		cout << "\n" << arr[j] << " appeared " << count << " times";
	}
	return 0;
}