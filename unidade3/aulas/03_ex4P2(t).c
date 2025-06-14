#include <stdio.h>

// Função que calcula o MDC (Máximo Divisor Comum) entre dois números inteiros
int mdc(int a, int b) {
    // Enquanto os números forem diferentes
    while (a != b) {
        if (a > b)
            a = a - b; // Subtrai b de a se a for maior
        else
            b = b - a; // Subtrai a de b se b for maior
    }
    // Quando a == b, esse valor é o MDC
    return a;
}

int main(){
    // Exibe o MDC entre 9 e 3
    printf("%d\n", mdc(9, 3));
    
    return 0;
}
