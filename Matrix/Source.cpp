#include <iostream>
#include "Matrix.h"
#include <ctime>
int main() {

	/*size_t Rows;
	size_t Cols;
	double** matrix = inputFileMatrix("matrix.txt", Rows, Cols);
	printMatrix(matrix, Rows, Cols);
	deleteMatrix(matrix, Rows, Cols);*/

	//
	//srand(time(NULL));
	//size_t const Rows = 4;
	//size_t const Cols = 3;
	//double** matrix = createMatrix(Rows, Cols);
	////
	//ones(matrix, Rows, Cols);
	//printMatrix(matrix, Rows, Cols);

	//zeroes(matrix, Rows, Cols);
	//printMatrix(matrix, Rows, Cols);

	//fillMatrix(matrix, Rows, Cols, -1.2);
	//matrix[0][1] = 2;
	//matrix[2][1] = -3;
	//printMatrix(matrix, Rows, Cols);
	//
	//double** transposed = transpose(matrix, Rows, Cols);
	//printMatrix(transposed, Cols, Rows);
	//deleteMatrix(transposed, Cols, Rows);

	//for (size_t r=0; r < Rows; ++r) {
	//	for (size_t c = 0; c < Cols; ++c) {
	//		matrix[r][c] =r*Cols+c;
	//	}
	//}
	//printMatrix(matrix, Rows, Cols);
	//rotate180(matrix, Rows, Cols);
	//printMatrix(matrix, Rows, Cols);
	//deleteMatrix(matrix, Rows, Cols);

	//double** vec = linspace(Cols);
	//printMatrix(vec, 1, Cols);
	//deleteMatrix(vec, 1, Cols);
	//

	/*matrix = createMatrix(Rows, Cols);
	inputMatrix(matrix, Rows, Cols);
	std::cout << "Maximum of your matrix: " << maximumMatrix(matrix, Rows, Cols) << "\n";
	std::cout << "Maximum of minimums of rows in your matrix: " << minmaxMatrix(matrix, Rows, Cols) << "\n";
	mixMatrix(matrix, Rows, Cols, 0, 2);
	printMatrix(matrix, Rows, Cols);
	deleteMatrix(matrix, Rows, Cols);*/


	/*
	double** matrixA = createMatrix(3, 3);
	double** matrixB = createMatrix(3, 3);
	inputMatrix(matrixA, 3, 3);
	inputMatrix(matrixB, 3, 3);
	printMatrix(productMatrix(matrixA, matrixB, 3, 3, 3),3,3);
	*/


	size_t rows;
	size_t cols;
	std::cin >> rows >> cols;
	double** matrixA = createMatrix(rows, cols);
	inputMatrix(matrixA, rows, cols);
	std::cout << "\n";
	for (size_t r = 0; r < rows; ++r) {
		for (size_t c = 0; c < cols; ++c) {
			std::cout << matrixA[r][c] << "\t";
		}
		std::cout << "\n";
	}
	std::cout << "\n";

	size_t m = cols;
	std::cout << "Determinant of your matrix: " << Det_Inside(matrixA, m) << "\n";


	std::cout << "\n";
	//std::cout << "Determinant of your matrix: " << determinant(matrixA, 3) << "\n";
	double** inverse = inv(matrixA, m);
	std::cout << "Inverse Matrix:" << "\n";
	for (size_t r = 0; r < rows; ++r) {
		for (size_t c = 0; c < cols; ++c) {
			std::cout << inverse[r][c] << "\t";
		}
		std::cout << "\n";
	}
	std::cout << "\n";
	
	deleteMatrix(matrixA, rows, cols);
	deleteMatrix(inverse, rows, cols);
	return 0;
}
