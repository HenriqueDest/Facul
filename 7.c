#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(void)
{
    char k; // as variaveis estao assim por conta que quando eu ia rodar o codigo novamente estava guardando os dados da ultima vez, entao coloquei os 0 dentro do 'do'
    do
    {
        int z = 0, cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0, um = 0;
        float a = 0, x = 0;
        float b = 0, t = 0, m = 0;

        do
        {
            printf("\nInforme a quantidade de produtos: ");
            scanf("%f", &a);
            if (a <= 0)
            {
                break;
            } // caso digite um valor negativo ou 0 o laço termina aqui mesmo
            printf("Informe o valor unitario do produto: ");
            scanf("%f", &b);
            if (b <= 0)
            {
                break;
            }

            (t = t + (a * b)); // equação pra incrementar valor total
            (x = x + a);       // equação pra armazenar a quantidade total de produtos

        } while (a != 0 && b != 0); // laço fica acontecendo até digitar um diferente de 0
        m = t / x;                  // media da compra
        printf("Valor total da compra: R$%2.2f\n", t);  //LETRA (A)
        printf("Valor medio da compra: R$%2.2f\n", m);  //LETRA (B)
        printf("\nO valor da compra eh %d e %2.2f centavos\n", (int)t, t - ((int)t)); // usei inteiro para exibir a primeira parte, e em seguida para exibir os centavos float - int
        // LETRA (C)
        z = (int)t; // divido o valor total até sua parte inteira ser decomposta inteiramente
        cem = z / 100;
        z = z - (cem * 100);
        cinquenta = z / 50;
        z = z - (cinquenta * 50);
        vinte = z / 20;
        z = z - (vinte * 20);
        dez = z / 10;
        z = z - (dez * 10);
        cinco = z / 5;
        z = z - (cinco * 5);
        dois = z / 2;
        z = z - (dois * 2);
        um = z / 1;
        z = z - (um * 1);

        printf("\n%d reais equivale a:\n", (int)t); //LETRA (D)
        if (cem != 0)
        { // fiz o uso desses "if" para aparecer apenas as notas que forem usadas, caso tenha 0 delas não aparece
            printf("%d nota(s) de 100\n", cem);
        }
        if (cinquenta != 0)
        {
            printf("%d nota(s) de 50\n", cinquenta);
        }
        if (vinte != 0)
        {
            printf("%d nota(s) de 20\n", vinte);
        }
        if (dez != 0)
        {
            printf("%d nota(s) de 10\n", dez);
        }
        if (cinco != 0)
        {
            printf("%d nota(s) de 5\n", cinco);
        }
        if (dois != 0)
        {
            printf("%d nota(s) de 2\n", dois);
        }
        if (um != 0)
        {
            printf("%d moeda(s) de 1\n", um);
        }

        printf("\nDeseja repetir o programa ('s' para sim, 'n' para nao)\n"); // repetição do codigo
        k = getche();
    } while (k == 's');
    return 0;
}
