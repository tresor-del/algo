#include <stdio.h>
#define SIZE 10

int main()
{
    int tab[SIZE] = {3, -2, 7, 10, -5, 22, 1, 27, 25, 30};
    int i, j, tmp, index;

    printf("Tableau initial :\n");
    for (i = 0; i < SIZE; ++i)
    {
        printf("%4d", tab[i]);
    }

    for (i = 0; i < SIZE - 1; i++)
    {
        index = i;
        for (j = i + 1; j < SIZE; j++)
        {
            if (tab[j] < tab[index])
            {
                index = j;
            }
        }

        if (index != i)
        {
            tmp = tab[i];
            tab[i] = tab[index];
            tab[index] = tmp;
        }
    }

    printf("\n\n******** Tableau trié par ordre croissant ********\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%4d", tab[i]);
    }

    printf("\n");
    return 0;
}
