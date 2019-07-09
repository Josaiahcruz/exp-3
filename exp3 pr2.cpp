#include <iostream>
using namespace std;


int main()
{
	const int q = 3;
	const int w = 7;
	int i, j, e, r;
	int array[q][w];

	char prov[1][4] = { "ABC" };

	cout << "Enter the temperatures of Province A, Province B and Province C for a week." << endl;
	{
		for (e = 0; e < 1; e++)
		{
			for (r = 0; r < 3; r++)
			{
				for (j = 0; j < 7; j++)
				{
					cout << "Province " << prov[x][y] << ", Day " << j + 1 << " : ";
					cin >> array[r][j];
				}
			}
		}
	}
	cout << "\nDisplaying Values: " << endl;
	{
		for (e = 0; e < 1; e++)
		{
			for (r = 0; r < 3; r++)
			{
				for (j = 0; j < 7; j++)
				{
					cout << "Province " << prov[x][y] << ", Day " << j + 1 << " = " << array[y][j] << endl;
				}
			}
		}
	}

	system("pause");
	return 0;
}