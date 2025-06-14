#include <stdio.h>

int mdc(int a, int b) {
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int main(){
    printf("%d\n", mdc(9, 3));
    
    return 0;
}
