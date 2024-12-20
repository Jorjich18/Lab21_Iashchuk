#include <iostream>
using namespace std;

int main()
{
	int a[8][4], i, j;
	cout << "Input elements of matrix 8x4:" << endl;
	for (i = 0; i < 8; i++)
		for (j = 0; j < 4; j++)
			cin >> a[i][j];
	int row = 0;
	int r[8] = { 0 };
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 4; j++)
			if (a[i][j] == 5 || a[i][j] == 25) r[i]++;
		if (r[i] != 0) row++;
	}
	int** b = new int* [4];
	for (j = 0; j < 4; j++)
		b[j] = new int[row];
	int k = 0;
	for (i = 0; i < 8; i++)
		if (r[i] != 0) {
			for (j = 0; j < 4; j++) 
				b[k][j] = a[i][j];
			k++;
		}
	if (!row)
		cout << "\nRows with 5 or 25 are not exist";
	else
		cout << endl << row << " rows with 5 or 25";
	cout << "\nMatrix with rows with 5 or 25" << endl;
	for (i = 0; i < row; i++) {
		for (j = 0; j < 4; j++)
			cout << b[i][j] << "\t";
		cout << endl;
	}
	for (j = 0; j < 4; j++)
		delete[]b[j];
	delete[]b;
	return 0;
}