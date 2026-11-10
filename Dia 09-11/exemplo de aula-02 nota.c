/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void exibirVetor(float vetor[], int tamanho)
{
    int i;
    for (i=0; i<tamanho; i++)
    {
        printf("%f ", vetor[i]);
    }
    printf("\n");
}


void bubbleSort (float vetor[], int tamanho)
{
    int i, j, auxiliar;
    for (i = 0; i <tamanho -1; i++)
    {
        for(j=0; j<tamanho -1-i; j++)
        {
            if (vetor[j]<vetor[j+1]){
                auxiliar = vetor[j];
                vetor[j] = vetor [j+1];
                vetor[j+1] = auxiliar;
            }
        }
    }
}




int main(void)
{
    float notas[5]={6.5, 9.0, 7.5, 5.0, 8.0};
    int tamanho = 5;
    
    printf("notas antes: \n");
    exibirVetor(notas, tamanho);

    printf("Notas depois da ordenação: \n");
    bubbleSort(notas, tamanho);
    exibirVetor(notas, tamanho);
}