
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
    int func_choize = menu();
    matrix matrix_my;


    switch (func_choize) {
        case 0:{
            return 0;
        }
        case 1:{
matrix_my.create_matrix(matrix_my);
        }
        case 2:{

        }
        case 3:{

        }
        case 4:{

        }
    }

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
