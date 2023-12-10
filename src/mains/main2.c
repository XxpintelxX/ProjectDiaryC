#include "../../headers/cell.h"
#include "../../headers/complementary.h"
#include "../../headers/timer.h"


int main()
{
    srand(time(NULL));
    int val_search = 0;
    int num_search[4] = {1000, 10000, 100000};
    for (int k = 0; k < 3; k++)
    {
        printf("\n---------------------------");
        printf("\n---------------------------\n");
        printf("%d SEARCHES\n", num_search[k]);

    /*------------------------------------------------*/


        for (int level = 7; level <= 15; level++)
        {
            int taille = (int)(pow(2, level) - 1);
            t_d_list* list = createEmptyList(level);
            list = fillList(list, taille);
            
            startTimer();
            for (int i = 0; i < num_search[k]; i++)
            {
                val_search = (rand() % taille) + 1;
                searchValue(*list, val_search);
            }
            stopTimer();

            printf("\n\n|*----------------------------------*|\nlevel %d\n\n", level);
            displayTime();
            printf("\n");
            free(list);
        }

    /*------------------------------------------------*/

        printf("\n----------------------------------------------\n");
        printf("----------------------------------------------\n\n");

    /*------------------------------------------------*/

        for (int level = 7; level <= 15; level++)
        {
            startTimer();
            int taille = (int)(pow(2, level) - 1);
            t_d_list* list = createEmptyList(level);
            list = fillList(list, taille);
            for (int i = 0; i < num_search[k]; i++)
            {
                val_search = (rand() % taille) + 1;
                dichoSearchValue(*list, val_search);
            }
            stopTimer();
            printf("\n|*----------------------------------*|\nlevel %d\n\n", level);
            displayTime();
            
            free(list);
        }
        printf("\n");
        
    }
    printf("\n");
/*------------------------------------------------*/

    return 0;
}
