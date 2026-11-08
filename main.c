/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/#include <stdio.h>

int main() {
    int saldo = 1000;     
    int saque;    
    int restante;   
    int nota100, nota50, nota20, nota10, nota5;  

    printf("Digite o valor do saque: ");   
    scanf("%d", &saque);   

    if (saque % 5 != 0) {            
        printf("Erro: o valor deve ser multiplo de 5.\n");  
    }
    else if (saque > saldo) {  
        printf("Erro: saldo insuficiente.\n");   
    }
    else {
        restante = saque;   
        nota100 = restante / 100;    
        restante = restante % 100;
        nota50 = restante / 50;      
        restante = restante % 50;
        nota20 = restante / 20;    
        restante = restante % 20;
        nota10 = restante / 10;     
        restante = restante % 10;
        nota5 = restante / 5;   
        restante = restante % 5;

        printf("\nSaque realizado!\n");   
        printf("Notas de R$100: %d\n", nota100);  
        printf("Notas de R$50: %d\n", nota50);    
        printf("Notas de R$20: %d\n", nota20);    
        printf("Notas de R$10: %d\n", nota10);  
        printf("Notas de R$5: %d\n", nota5);    
    }

    return 0;
}