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
        //int temp_numbers_cols = 1;
        //std::cout << "\nEnter to number of rows: ";
        //temp_numbers_cols = get_number(1);
        std::cout << "\nEnter to number of columns: ";
        this->matrix_cols = get_number(1);

        /*std::cout << "\nEnter to all number of array. (For example for 2 cols: -1 2 3 4)" << std::endl;
        char buffer[256] = {NULL};
        //std::cin >> buffer;
        fgets(buffer, 256, stdin);
        //std::cin.getline(buffer, 256, '\n');
        std::cout << buffer;
        this->matrix_data = char_to_vector(buffer);
        while (this->matrix_data.size() % this->matrix_cols == 0) {
            std::cout << "\nEnter more " << this->matrix_cols - (this->matrix_data.size() % this->matrix_cols)
                      << " values";
            buffer[256] = {NULL};
            std::cin >> buffer;
            this->matrix_data = char_to_vector(buffer);
        }
        fgets(buffer, 256, stdin);
        std::cout << "You entered: " << buffer;
        std::vector<int> matrix_data = char_to_vector(buffer);
        while (matrix_data.size() % this->matrix_cols == 0) {
            std::cout << "\nEnter more " << this->matrix_cols - (matrix_data.size() % this->matrix_cols)
                      << " values";
            for (int i = 0; i < 256; i++) {
                buffer[i] = '\0';
            }
            fgets(buffer, 256, stdin);
            matrix_data = char_to_vector(buffer);
        }*/

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
            printf("%5d", matrix_data[j* this->matrix_cols + i]);
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}


