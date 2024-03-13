/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
//escrever um algoritmo que calcule e mostre a media aritmetica dos numeros 
//lidos entre 13 e 73
int main()
{
    system("clear");
    int i, soma, contagem;
    double media;
    for(i = 13; i <= 73; i++){
        soma += i;
        contagem++;
    }
    media = soma / contagem;
    printf("A media dos numeros: %2.f", media);
}
