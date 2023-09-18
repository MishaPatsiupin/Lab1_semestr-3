#include "matrix.h"
#include "func.h"


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
        std::cout << "\nEnter to number of columns: ";
        this->matrix_cols = get_number(1);

        int expected_number_of_rows = 1;
        for (int i = 1; i <= expected_number_of_rows; ++i) {//по строкам
            for (int j = 1; j <= this->matrix_cols; ++j) { //по столбцам
                std::cout << "\nEnter the element " << i << " rows, and  " << j << " cols.  -->";
                int buffer_num = 0;
                std::cin >> buffer_num;
                this->matrix_data.push_back(buffer_num);
            }
            int choise = 0;
            std::cout << "\nIf you vont enter the one more rows - enter the 1, else - 0\n";
            choise = get_number(0);
            if (choise == 1) {
                expected_number_of_rows++;
            }
        }
    }

    matrix::print_matrix();
}

void matrix::print_matrix() {
    std::cout << "\n Your matrix:\n";
    for (int j = 0; j < this->matrix_data.size() / this->matrix_cols; j++) {
        for (int i = 0; i < matrix_cols; i++) {
            printf("%5d", matrix_data[j * this->matrix_cols + i]);
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void matrix::transposing_matrix() {
    this->matrix_data = transposing(this->matrix_data, this->matrix_cols);
    this->matrix_cols = this->matrix_data.size() / this->matrix_cols;
}


