#include <stdio.h>
#include <stdlib.h>
#include "awọn_ipo.h"
#include "massiv_arms.h"
int ipow(int x, int n);
int chArm(int n);
int main(int argc, char *argv[])
{
  int Beg,End,i;
  // Вводимо перше число від якого будемо шукати далі
  printf("Beg="); scanf("%d",&Beg);
  // Вводимо число до якого будемо шукати  
  printf("End="); scanf("%d",&End);
  // Якщо умова вірна йдемо далі, якщо хибна дивимося наступге число
  for (i=Beg; i<=End; i++)
  // Якщо так виводимо значення
  if (chArm(i)) 
  printf("%d\n",i);
  return 0;
}
