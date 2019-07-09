#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char arr[100];
	int i, j;

	cout << "Enter characters: " << endl;
	cin.getline(arr, 100);
	i = strlen(arr);
	for (j = i; j >= 0; j--)
	{
		cout << arr[j];
	}
	cout << "\nArray size = " << i + 1 << endl;
	system("pause");
	return 0;
}
