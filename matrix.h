#ifndef LAB1_TEST_MATRIX_H
#define LAB1_TEST_MATRIX_H

#include <vector>
#include <iostream>

/*Класс для работы с матрицами.
 *Поля – размер, одномерный массив.
 *Реализовать методы для произвольного доступа к элементам, добавления и удаления строки или столбца,
транспонирование.
 *возможность автоматического добавления данных,
 *возможность изменить поле объекта(методом), удалить, добавить новый объект в массив или список.
 *классы должны быть разделены на файлы '.h' и '.cpp'
 *Меню должно быть
 *
    std::cout << "Enter 1, to create a new matrix" << std::endl; //+++
    std::cout << "Enter 2, To view the matrix" << std::endl;//+++
    std::cout << "Enter 3, to view or minimize an arbitrary matrix element" << std::endl; //+строка, толбец
    std::cout << "Enter 4, for transposing a matrix" << std::endl;
    std::cout << "Enter 0, for exit program" << std::endl;
*/
class matrix {
public:
    int matrix_cols = 0;
    std::vector<int> matrix_data;

    void create_matrix();
    void print_matrix();
    void transposing_matrix();

    void change_data();
    void change_one_element();
    void add_row();
    void delete_row();
    void add_col();
    void delete_col();

};


#endif //LAB1_TEST_MATRIX_H
