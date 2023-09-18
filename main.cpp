#include "matrix.h"
#include "func.h"

/*
 *Реализовать методы для произвольного доступа к элементам, добавления и удаления строки или столбца,
 *возможность изменить поле объекта(методом), удалить, добавить новый объект в массив или список.
*/

int main() {
    matrix matrix_my;
    int func_choize;

    while (true) {
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
                matrix_my.change_data();
                break;
            }
            case 4: {
                matrix_my.transposing_matrix();
                break;
            }
        }
    }

    std::cout << "Hello, World!" << std::endl;
    return 0;
}


