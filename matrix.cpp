#include "matrix.h"
#include "func.h"


void matrix::create_matrix() {

    if (this->matrix_cols != 0) {
        this->matrix_cols = 0;
        this->matrix_data = {'\0'};
    }

    std::cout << "\nEnter 0, to auto create new matrix" << std::endl;
    std::cout << "Enter 1, to set matrix parameters" << std::endl;

    if (get_choize(0, 1) == 0) {
        int temp_numbers_matrix_rows = 0;

        std::cout << "\nEnter to number of columns:" << std::endl;
        this->matrix_cols = get_number(1);

        std::cout << "Enter to number of rows:" << std::endl;
        temp_numbers_matrix_rows = get_number(1);

        for (int i = this->matrix_cols * temp_numbers_matrix_rows; i > 0; i--) {
            this->matrix_data.push_back(random(-20, 20));
        }
    }

    else {
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
    std::cout << "\nYour matrix:\n";

    if (this->matrix_cols == 0) {
        std::cout << "Matrix emply\n";

    } else {
        for (int j = 0; j < this->matrix_data.size() / this->matrix_cols; j++) {
            for (int i = 0; i < matrix_cols; i++) {
                printf("%5d", matrix_data[j * this->matrix_cols + i]);
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
}

void matrix::transposing_matrix() {
    if (this->matrix_cols == 0) {
        std::cout << "Matrix emply\n";

    } else {
        this->matrix_data = transposing(this->matrix_data, this->matrix_cols);
        this->matrix_cols = this->matrix_data.size() / this->matrix_cols;
    print_matrix();
    }
}

void matrix::change_one_element() {
    print_matrix();
    int i = 0, j = 0;
    std::cout << "In which line do you want to change the element?, i = ";
    i = get_number(0);
    std::cout << "Which column does it belong to?, j = ";
    j = get_number(0);

    std::cout << "Enter a new value --> ";
    std::cin >> this->matrix_data[(i-1)* this->matrix_cols + (j-1)];
    std::cout << "Okk.";
    print_matrix();
}

void matrix::change_data() {
        int func_choize;

            func_choize = menu_change_data();

            switch (func_choize) {
                case 0: {
                    break;
                }
                case 1: {
                    this->change_one_element();
                    break;
                }
                case 2: {
                    this->add_row();
                    break;
                }
                case 3: {

                    break;
                }
                case 4: {

                    break;
                }
                case 5: {

                    break;
                }
            }
}

void matrix::add_row() {
    int after_this_rows = 0;
    std::cout << "After which line will the new line be placed?";
    after_this_rows = get_number(0);

    for (int i = 1; i <= this->matrix_cols; i++){
        int time_znah = 0;
        std::cout << "Enter the " << i << "st element, -->";
        std::cin >> time_znah;

        auto position = this->matrix_data.begin() + after_this_rows * this->matrix_cols + i - 1;
        this->matrix_data.insert(position, time_znah);
    }
    print_matrix();
}






