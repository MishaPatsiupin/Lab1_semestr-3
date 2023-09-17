#include "matrix.h"
#include "func.h"


/*
std::vector<int> matrix::vector_filling(const char *input) {
    std::vector<int> result;
    std::istringstream iss(input);
    int number;
    while (iss >> number) {
        result.push_back(number);
    }
    return result;
}
*/
void matrix::create_matrix() {

    std::cout << "\nEnter 0, to auto create new matrix" << std::endl;
    std::cout << "Enter 1, to set matrix parameters" << std::endl;

    if (get_choize(0, 1) == 0) {
        int temp_numbers_matrix_cols = 0;
        int temp_numbers_matrix_rows = 0;

        std::cout << "\nEnter to number of columns:" << std::endl;
        //matrix_input->matrix_cols = get_number(1);
        temp_numbers_matrix_cols = get_number(1);
        this->matrix_cols = temp_numbers_matrix_cols;

        std::cout << "Enter to number of rows:" << std::endl;
        temp_numbers_matrix_rows = get_number(1);
        printf("%d\n", this->matrix_cols);
        printf("%d\n", temp_numbers_matrix_rows);

        for (int i = this->matrix_cols * temp_numbers_matrix_rows; i > 0; i--) {
            this->matrix_data.push_back(random(-20, 20));
        }
    } else {

    }

    matrix::print_matrix();
}

void matrix::print_matrix() {
    std::cout << "\n Your matrix:\n";
    for (int j = 0; j < this->matrix_data.size() / this->matrix_cols; j++) {
        for (int i = 0; i < matrix_cols; i++) {
            printf("%5d", matrix_data[j + i]);
           // std::cout << matrix_data[j + i] << " ";
           // if ((i + 1) % matrix_cols == 0) {
             //   std::cout << std::endl;
            //}
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}


