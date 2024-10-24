// practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int array[10][10];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			array[i][j] = rand() % 50;
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << array[i][j] << " ";

		}
		cout << endl;
	}
	int max_number = -1;
	int row_with_max_number;
	int col_with_max_number;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (array[i][j] > max_number) {
				max_number = array[i][j];
				row_with_max_number = i;
				col_with_max_number = j;

			}
		}
	}
	cout << max_number << endl << "coordinates: " << row_with_max_number << ": " << col_with_max_number << endl;

	//cout << array[row_with_max_number];
	for (int i = 0; i < 10; i++) {
		cout << array[row_with_max_number][i] << ' ';
	}
	int min_number = 51;
	int row_with_min_number;
	int col_with_min_number;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (array[i][j] < min_number) {
				min_number = array[i][j];
				row_with_min_number = i;
				col_with_min_number = j;
			}
		}
	}
cout << endl << min_number << endl << "coordinates: " << row_with_min_number << ": " << col_with_min_number << endl;
for (int i = 0; i < 10; i++) {
	cout << array[row_with_min_number][i] << " ";
}

}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
