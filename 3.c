#include <stdio.h>

int main()
{
   int a = 0, b = 0, i = 0, x = 0, z = 0;
   int c = -1, k;

   do
   {
      do{
   printf("\nInforme o valor do limite inferior do intervalo: ");
   scanf("%d", &a);
      }while(a <= 1);
      do{
   printf("Informe o valor do limite superior do intervalo: ");
   scanf("%d", &b);
   }while(b<a);
do{
   printf("Informe quantos numeros deseja imprimir por linha: ");
   scanf("%d", &z);
}while(z<=0);

      while (a < b)
      {
         x = 0;
         if (a <= 1)
         {
            ++a;
            continue;
         }
         for (i = 2; i <= a / 2; ++i)
         {
            if (a % i == 0)
            {
               x = 1;
               break;
            }
         }
         if (x == 0)
         {
            c++;
            if (c >= z)
            {
               c = 0;
               printf("\n");
            }
            printf("%d ", a);
         }
         ++a;
      }
      printf("\nDeseja digitar outro numero? ('s' para sim, 'n' para nao)\n");
      k = getche();
   } while (k == 's');
   return 0;
}