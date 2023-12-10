#include "../../headers/cell.h"
#include "../../headers/complementary.h"
#include "../../headers/timer.h"

int main()
{
    t_d_list* list = createEmptyList(SIZE);

    insertHead(list, 9, 1);
    insertHead(list, 8, 2);
    insertHead(list, 4, 3);
    insertSortedCell(list, 6, 1);
    insertSortedCell(list, 12, 4);

    displayLevel(list, 0);
    displayLevel(list, 2);

    printf("\n");
    
    displayAllLevel(list);

    free(list);
    return 0;
}
