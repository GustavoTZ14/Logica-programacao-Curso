#include <stdio.h>
#include <string.h>

int main() {

   int idade;
   double salario, altura;
   char genero;
   char nome[50];

   idade = 20;
   salario = 5800.58;
   altura = 1.80;
   genero = 'M';
   strcpy(nome, "gustavo terrin");

   printf("idade =%d\n",idade);
   printf("salario =%.2f\n",salario);
   printf("altura =%.2f\n",altura);
   printf("genero =%c\n",genero);
   printf("nome =%s\n",nome);

return 0;
}
