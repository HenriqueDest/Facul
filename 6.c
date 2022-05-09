#include <stdio.h>
#include <conio.h>
void main()
{

    int i, x, l;
    char a;

    do
    {
        do{
        printf("\nInforme um numero positivo: \n "); // solicito um número 
        scanf("%d", &l);}        // recebo ele como l
        while(l<=0);           // laço para entrar apenas numeros positivos
        printf("\n");
        for (i = 1; i <= l; ++i)    // inicio com i valendo 1 e terminando com o valor deixado pelo usuario acrescentando 1 a cada ciclo
        {
            for (x = 1; x <= i; ++x)
            {
                printf("%d ", i);
            }
            printf("\n");
        }

        printf("Deseja digitar outro numero? ('s' para sim, 'n' para nao)\n");
        a = getche();
    } while (a == 's');       // faço um laço o qual se o usuario digitar 's' ele refaz novamente

    return 0;
}
