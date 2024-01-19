#include <stdio.h>
int main()
{
int calif=0;
int erronea=0;
int i;
for (i = 1; i<=10; i++)
{
do
{
printf("\nEscriba una calificacion correcta:");
scanf("%d", &calif);
if (calif <0 || calif > 10){
erronea=1;
printf("\nLa calificacion es erronea, introduzca de nuevo: ");
}
else
{
erronea = 0;
}
}
while (erronea != 0);
printf("\nGracias!!");
}
}
