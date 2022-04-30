#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int i, a, x;

    srand(time(NULL));   // vai gerar um numero aleatorio de acordo com o horario do pc
    for (i = 0; i < 1; i++)
        x = rand() % 10;     // x vai ser igual ao número aleatorio

    do
    {
        printf("Digite um numero de 0 a 10: ");       // peço ao usuario digitar um numero 
        scanf("%d", &a);

        if (a == x)                 // se x for igual ao numero que ele digitou esta correto
        {
            printf("\nVoce acertou! O numero magico eh: %d", x);
        }
        else if (a > x)
            printf("Errado, muito alto!\n");
        else if (a < x)
            printf("Errado, muito baixo!\n");
    } while (x != a);                 // caso x seja diferente de 'a' ele ficará no ciclo até acertar o número

    return 0;
}