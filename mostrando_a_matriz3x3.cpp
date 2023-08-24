#include <iostream>

const int rows = 3;
const int cols = 3;

int main() {
    int matrix[rows][cols];
    int maxNumber = 0;

    // Carregando a matriz e encontrando o maior número
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Digite o elemento da matriz[" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];

            if (matrix[i][j] > maxNumber) {
                maxNumber = matrix[i][j];
            }
        }
    }

    // Mostrando os elementos multiplicados pelo maior número
    std::cout << "\nMatriz multiplicada pelo maior numero (" << maxNumber << "):\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] * maxNumber << " ";
        }
        std::cout << "\n";
    }

    return 0;
}

