#include <stdio.h>
#include <conio.h>
int main(void)
{
    char a, b; // uso char para as duas primeiras "perguntas" e na ultima por ser número uso o float
    float c;

    do
    {
        printf("\nResponda com 's'para sim, ou 'n' para nao\n");
        printf("Voce se sente bem?\n ");
        a = getche();
    } while (a != 's' && a != 'n'); // caso o usuario escreva qualquer coisa que nao seja "s" ou "n" ele fica preso nesse ciclo até responder corretamente

    switch (a) // uso o switch como escolha
    {
    case 's':
        printf("\nVoce esta saudavel!\n");
        break;
    case 'n':
        do
        {
            printf("\nResponda com 's'para sim, ou 'n' para nao\n");
            printf("Voce sente alguma dor?\n ");
            b = getche();
        } while (b != 's' && b != 'n'); // caso o usuario escreva qualquer coisa que nao seja "s" ou "n" ele fica preso nesse ciclo até responder corretamente

        switch (b)
        {
        case 's':
            printf("\nVoce esta doente!\n");
            break;

        case 'n':
            printf("\nInforme sua temperatura em graus Celsius\n");
            scanf("%f", &c);

            if (c <= 37) // uso o if como decisão
            {
                printf("Voce esta saudavel!");
            }
            else
                printf("Voce esta doente!");

        default:
            break;
        }

    default:
        break;
    }

    return 0;
}