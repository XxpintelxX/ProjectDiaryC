#include "../headers/cell.h"

t_d_cell* createCell(int value, int levels)
{
    t_d_cell *cell = (t_d_cell*) malloc(sizeof(t_d_cell));
    cell->value = value;
    cell->level = levels;
    cell->next = (t_d_cell**) malloc(sizeof(t_d_cell*) * cell->level);
    
    for (int i = 0; i < cell->level; i++)
        cell->next[i] = NULL; // Initialize all elements of the next array to NULL
    
    return cell;
}

t_d_list* createEmptyList(int maxlevel)
{
    t_d_list* list;
    list = (t_d_list*) malloc(sizeof(t_d_list));
    list->maxlevel = maxlevel;
    list->head = (t_d_cell**) malloc(sizeof(t_d_cell*) * maxlevel);
    for (int i = 0; i < maxlevel; i++)
        list->head[i] = NULL;
    return list;
}

void insertHead(t_d_list* list, int value, int levels)
{
    t_d_cell* cell = createCell(value, levels);
    for (int curlvl = 0; curlvl < levels; curlvl++)
    {
        if (list->head[curlvl] != NULL)
        {
            cell->next[curlvl] = list->head[curlvl];
            list->head[curlvl] = cell;
        }else{
            list->head[curlvl] = cell;
        }
    }
}

void insertSortedCell(t_d_list* list, int value, int level)
{
    t_d_cell *cell = createCell(value, level);
    t_d_cell *tmp = NULL;
    for (int i = list->maxlevel - 1; i >= 0; i--)
    {
        if (cell->level > i)
        {
            if (list->head[i] == NULL)
            {
                cell->next[i] = list->head[i];
                list->head[i] = cell;
            }
            else
            {
                tmp = list->head[i];
                while ((tmp->next[i] != NULL))
                {
                    if (tmp->next[i]->value > value)
                        break;
                    tmp = tmp->next[i];
                }
                cell->next[i] = tmp->next[i];
                tmp->next[i] = cell;
            }
        }
    }
}
