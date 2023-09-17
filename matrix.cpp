#include "matrix.h"

//крч при вводе считать, скако ввели, и чтоб кратно столбцам
matrix::matrix(int size) {
    this->matrix_size = size;
    this->matrix_data.resize(size * size);
}

matrix::~matrix() {}

void matrix::print_matrix() {
    for (int i = 0; i < matrix_size; i++) {
        std::cout << matrix_data[i] << " ";
        if ((i + 1) % matrix_cols == 0) {
            std::cout << std::endl;
        }
    }
}

void matrix::setFieldValue(int row, int col, int value) {
    int index = row * matrix_cols + col;
    if (index >= 0 && index < matrix_size) {
        matrix_data[index] = value;
    } else {
        std::cout << "Некорректные индексы поля." << std::endl;
    }
}


