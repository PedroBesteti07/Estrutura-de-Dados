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
    int i, valor, fora, dentro;
    for(i = 1; i <= 10; i++){
        printf("Digite o valor:\n");
        scanf("%d", &valor);
        
        if(valor >= 10 && valor <= 20){
            dentro++;
        }else{
            fora++;
        }
    }
   
    printf("A quantidade de valores dentro do intervalor é: %d", dentro);
    printf("A quantidade de valores fora do intervalor é: %d", fora);
}
