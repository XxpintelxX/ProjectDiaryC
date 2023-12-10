#ifndef CELL_H
# define CELL_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <math.h>

#define SIZE 4
#define true 1
#define false 0


typedef struct s_d_cell
{
    int value;
    int level;
    struct s_d_cell **next;
} t_d_cell;

typedef struct s_d_list
{
    int maxlevel;
    t_d_cell **head;
} t_d_list;

typedef int my_bool;

t_d_cell* createCell(int value, int levels);
t_d_list* createEmptyList(int maxlevel);
void insertHead(t_d_list* list, int value, int levels);
void displayLevel(t_d_list* list, int level);
void displayAllLevel(t_d_list* list);
int dichoSearchValue(t_d_list list, int value);
void insertSortedCell(t_d_list* list, int value, int level);


#endif