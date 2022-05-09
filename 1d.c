#include <stdio.h>
int main(void) 
{
char categoria;
int quantidade, soma=0, total=0;
float media;

do
{
    printf("Informe a categoria(A,B ou C): ");
    fflush (stdin);
    scanf("%c", &categoria);
    do{
    printf("Informe a quantidade,sendo ela positiva: ");
    scanf("%d", &quantidade);
    }
    while (quantidade <= 0);
    
soma = soma + quantidade;
total++;
media = soma/total;

} while (categoria == 'A' || categoria == 'B' || categoria == 'C');
printf("A media dos produtos eh %.2f", media);



return 0;
}
