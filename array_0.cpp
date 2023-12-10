#include <iostream>

using namespace std;

int main()
{
	int array[10];
	int count = 0;
	int i = 0;

	cout << "This examped will perform array reversal" << endl;
	cout << "Enter array element count: ";
	cin >> count;

	cout << "Enter each element value:" << endl;
	for (i = 0; i < count; i++)
	{
		cin >> array[i];
	}

	cout << "Reversed array: " << endl;
	for (i = (count - 1); i >= 0; i--)
	{
		cout << array[i] << " ";
	}
	cout << endl;

	return 0;
}
