#ifndef COMPLEMENTARY_H
# define COMPLEMENTARY_H

#include "cell.h"

void displayLevel(t_d_list* list, int level);
void displayAllLevel(t_d_list* list);
int searchValue(t_d_list list, int value);
t_d_list *fillList(t_d_list *list, int taille);


#endif