#include <stdio.h>#include <stdio.h>
#include <stdbool.h>
#include "awon_ipo.h"
#include "massiv_arms.h"
#include "derivation_decomposition.h"
int ipow(int x, int n);
bool chkAms(int n);
void printAms(int n);
int main()
{
    int min, max;
    // Вводимо мінімальне та максимальне значенння
    printf("min = "); scanf("%d", &min);
    printf("max = "); scanf("%d", &max);
    // Перевіряемо правдива чи хибна умова
    for (int i = min; i <= max; i++)
        if (chkAms(i)) printAms(i);
    // Повертаємо результат
    return 0;
}
