
#include <iostream>
#include "matrix.h"
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

int main() {
    matrix matrix_my;
    int func_choize;

    while (true) {
     //   system("cls");
        func_choize = menu();

        switch (func_choize) {
            case 0: {
                return 0;
            }
            case 1: {
                matrix_my.create_matrix();
                break;
            }
            case 2: {
                matrix_my.print_matrix();
                break;
            }
            case 3: {
                matrix_my.transposing_matrix();
                break;
            }
            case 4: {

                break;
            }
        }
    }

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
