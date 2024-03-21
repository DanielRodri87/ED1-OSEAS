/*Crie um algoritmo que recebe entradas inteiras do usuário até um momento que ele digitar um valor
X que servirá como parada. X = -1, lembrando que o valor de X não pode ser contabilizado para nada
(somatório, média, menor valor, maior valor...). Ao final, o algoritmo deverá informar:
a. O valor do somatório de todos os números;
b. O valor da média de todos os números;
c. O menor e o maior números informados;
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
int n, entrada;

printf("Digite o tamanho do vetor: ");
scanf("%d", &n);

int X[n], soma = 0, menor, maior, cont, tamanho;
float media;

for (cont = 0; cont < n; cont++)
{
    printf("Digite o valor do %d termo: ", cont+1);
    scanf("%d", &entrada); 

    if (entrada == -1)
        break;
    else
        X[cont] = entrada;

    tamanho = cont+1;
}

 maior = X[0];
 menor = X[0];

for (cont = 0; cont < tamanho; cont++)
{
    soma = soma + X[cont];

    if (X[cont] > maior)
    {
        maior = X[cont];
    }
    if (X[cont] < menor)
    {
        menor = X[cont];
    }

}

media = (float)soma / tamanho;
printf("O tamanho do vetor de números válidos é: %d\n", tamanho);
printf("O somatório dos números é: %d\n", soma);
printf("A média dos números é: %.2f\n", media);
printf("O maior número é: %d\n", maior);
printf("O menor número é: %d\n", menor);

}