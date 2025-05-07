#include <iostream>

using namespace std;

int main(){
    int i, sinal, t;
    float pi, den, soma;

    t = 2;
    den = 2;
    sinal = -1;
    pi = 3;
    i = 1;

    while (i<3){
        t += 2;
        den *= t * (t-1) ;
        sinal = -sinal;

        soma += (sinal * 4) / den;
        i++;
    }
    pi = 3 + soma;

    cout << "O denominador e: " << den << endl;
    cout << "O valor de PI: " << pi << endl;
    return 0;
}
