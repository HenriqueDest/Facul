#include <stdio.h>

int main(void)
{
int num1;
int num2;
float resto;
printf("Informe o primeiro valor: ");
scanf("%d",&num1);
printf("Informe o segundo valor: ");
scanf("%d",&num2);

if (num1==0 || num2 == 0)
{
printf("Nao eh possivel realizar divisao por zero\n");
}
else if (num1 > num2)
{
resto = num1 % num2;
printf("O resto da divisao eh %2.3f\n", resto);
}
else if (num2 > num1){
resto = num2 % num1;
printf("O resto da divisao eh %2.3f\n", resto);
}

return 0;

}
