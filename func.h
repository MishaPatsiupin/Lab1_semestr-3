#ifndef LAB1_TEST_FUNC_H
#define LAB1_TEST_FUNC_H
#include <vector>
#include <iostream>
#include <ctime>

int get_choize(int min, int max);
int menu();
int menu_change_data();
int get_number(int min);
int random(int min, int max);

std::vector<int> transposing(std::vector<int> matrix_data, int cols);


#endif //LAB1_TEST_FUNC_H
