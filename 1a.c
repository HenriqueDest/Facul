#include <stdio.h>
int main(void) 
{
char categoria;
int quantidade, soma, total;
float media;

do
{
    printf("Informe a categoria(A,B ou C): ");
    scanf("%c", &categoria);
    printf("Informe a quantidade: ");
    scanf("%f", &quantidade);

soma = soma + quantidade;
total++;
media = soma/quantidade;
} while (categoria == 'A' || categoria == 'B' || categoria == 'C');
printf("A media dos produtos eh %.2f", media);

return 0;
}
