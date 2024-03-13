/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
//Escrever um algoritmo que gera e escreve os numeros impares entre 100 e 200
int main()
{
    int i, numero;
    printf("Os numeros impares entre 100 e 200:\n");
    for(i=101; i<199; i+=2){
        printf("%d\n", i);
    }

}
