#include <iostream>

using namespace std;

void somar(float *var, float valor){
    *var += valor;
}

void iniVetor(float *v){
    v[0]=0;
    v[1]=0;
    v[2]=0;
    v[3]=0;
    v[4]=0;
}

int main(){
    float num=0;
    float vetor[5];

    somar(&num, 10);
    cout << num << endl;
    cout << endl;

    iniVetor(vetor);
    for (int i = 0; i < 5; i++){
        cout << vetor[i] << endl;
    }
    

    return 0;
}
