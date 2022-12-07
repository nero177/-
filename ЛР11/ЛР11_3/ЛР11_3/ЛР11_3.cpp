#include <iostream>

using namespace std;

int main()
{
	setlocale(0, ".1251");

	int columns = 4, rows = 4;

	int matr[4][4] = {
		{1,-2,3,4},
		{8,7,-6,5},
		{9,-10,11,12},
		{13,14,15,16}
	};

	int dMultiplie = 1;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (matr[i][j] < 0) {
				cout << "Рядок: " << i << " містить від'ємне число" << endl;
			}
		}

		dMultiplie *= matr[i][rows - 1 - i] * matr[i][i];
	}

	cout << "Добуток обох діагоналей матриці" << dMultiplie << endl;

	int matr2[4][4];
	double mainDiagonalAvarage = 0;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			int randNum = rand() % (200 - -200 + 1) + -200;
			matr2[i][j] = randNum;	
		}

		mainDiagonalAvarage += matr2[i][rows - 1 - i];
	}

	mainDiagonalAvarage /= 4;

	int lessThanAvarage = 0;

	for (int i = 0; i < rows; i++) {
		if (matr2[0][i] < mainDiagonalAvarage) {
			lessThanAvarage++;
		}
	}

	cout << "Середнє арифметичне основної діагоналі: " << mainDiagonalAvarage << endl;
	cout << "кількість елементів у першому рядку, менших середнього арифметичного: " << lessThanAvarage << endl;
}
