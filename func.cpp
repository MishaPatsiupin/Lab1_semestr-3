#include "func.h"

/*Класс для работы с матрицами.
 *Поля – размер, одномерный массив.
 *Реализовать методы для произвольного доступа к элементам, добавления и удаления строки или столбца,
транспонирование.
 *возможность автоматического добавления данных,
 *возможность изменить поле объекта(методом), удалить, добавить новый объект в массив или список.
 *классы должны быть разделены на файлы '.h' и '.cpp'
 *Меню должно быть
*/
int get_choize(int min, int max) {
    int choize = -1;

    while (choize == -1) {
        std::cout << "Enter the number from " << min << " to " << max << ": ";
        std::cin >> choize;

        if (std::cin.fail() || choize < min || choize > max) {
            std::cin.clear();
            std::cout << "Error input. Please try again." << std::endl;
            choize = -1;
        } else {
            return choize;
        }
    }
}


int get_number(int min) {
    int number = -1;

    while (number == -1) {
        std::cin >> number;

        if (std::cin.fail() || number < min) {
            std::cin.clear();
            std::cout << "Error input. Please try again." << std::endl;
            number = -1;
        } else {
            return number;
        }
    }
}


int menu(){
    int choize = -1;
    std::cout << "\n----------Matrix Calculator--------" << std::endl;
    std::cout << "Enter 1, to create a new matrix" << std::endl; //автоматич
    std::cout << "Enter 2, to view the matrix" << std::endl;
    std::cout << "Enter 3, to view or minimize an arbitrary matrix element" << std::endl; //+строка, толбец
    std::cout << "Enter 4, for transposing a matrix" << std::endl;
    std::cout << "Enter 0, for exit program\n" << std::endl;
choize = get_choize(0, 4);
    return choize;
}

int menu_change_data(){
    int choize = -1;
    std::cout << "\nEnter 1, to change one element" << std::endl; //автоматич
    std::cout << "Enter 2, to change data in one row" << std::endl;
    std::cout << "Enter 3, to add one row" << std::endl;
    std::cout << "Enter 4, to delete one row" << std::endl;
    std::cout << "Enter 5, to change data in one col" << std::endl;
    std::cout << "Enter 6, to add one col" << std::endl;
    std::cout << "Enter 7, to delete one col" << std::endl;

    std::cout << "Enter 0, for exit function\n" << std::endl;
    choize = get_choize(0, 7);
    return choize;
}

int count_size(const std::vector<int> &vec) {
    return vec.size();
}

int random(int min, int max) {
    static bool initialized = false;
    if (!initialized) {
        srand(time(NULL));
        initialized = true;
    }
    return rand() % (max - min + 1) + min;
}


std::vector<int> transposing (std::vector<int> matrix_data, int cols){
    int rows = matrix_data.size()/cols;

    std::vector<int> transposed_matrix(cols * rows);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposed_matrix[j * rows + i] = matrix_data[i * cols + j];
        }
    }
    return transposed_matrix;
}














