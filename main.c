#include <stdio.h>
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
    printf("min = "); scanf("%d", &min);
    printf("max = "); scanf("%d", &max);
    for (int i = min; i <= max; i++)
        if (chkAms(i)) printAms(i);
    return 0;
}
