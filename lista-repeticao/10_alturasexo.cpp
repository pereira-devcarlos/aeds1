#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

int main(){
    float altura, total, alturaM, mediaM, percF, altMaior;
    char sexo = ' ';

    cout << setprecision(2) << fixed;

    percF = 0;
    mediaM = 0;
    alturaM = 0;
    total = 0;
    altMaior = 0;

    cout << "\nDigite sua altura: ";
    cin >> altura;

    // Tratamento de erro se o usuário digitar algo que não seja número
    while (cin.fail()) {
        cout << "Erro: Entrada invalida. Por favor, digite um numero para a altura: ";
        cin.clear(); // Limpa o estado de erro do cin
        // Descarta a entrada inválida do buffer até a quebra de linha
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> altura;
    }

    while (altura < 1 || altura > 2.30){
        if (altura == 0)
            break;
        
        cout << "Erro: digite uma altura de 1.00m a 2.30m: ";
        cin >> altura;
    }

    if(altura != 0){
        cout << "Digite seu sexo, (F)Feminino ou (M)Masculino: ";
        cin >> sexo;
        sexo = toupper(sexo); //Converter para letra maiúscula caso for 'm'
        while (sexo != 'F' && sexo != 'M') {
            cout << "Erro: Sexo invalido. Digite F ou M: ";
            cin >> sexo;
            sexo = toupper(sexo);
        }
    }

    while (altura != 0){
        if (altura > 1.8){
            altMaior++;
        }
        if (sexo == 'M'){
            alturaM += altura;
            mediaM++;
        }
        if (sexo == 'F' && altura < 1.7){
            percF ++;
        }
        
        cout << "\nDigite sua altura: ";
        cin >> altura;
        
        while (cin.fail()) {
            cout << "Erro: Entrada invalida. Por favor, digite um numero para a altura: ";
            cin.clear(); // Limpa o estado de erro do cin
            // Descarta a entrada inválida do buffer até a quebra de linha
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> altura;
        }

        while (altura < 1 || altura > 2.30){
            if (altura == 0)
                break;
            
            cout << "Erro: digite uma altura de 1.00m a 2.30m: ";
            cin >> altura;
        }
    
        if (altura != 0){
            cout << "Digite seu sexo, (F)Feminino ou (M)Masculino: ";
            cin >> sexo; 
        }

        total ++;
    }
    
    altMaior *= 100.0 / total;
    mediaM = alturaM / mediaM;
    percF *= 100.0 / total;

    cout << "\nA porcentagem de pessoas com a altura maior que 1.80: " << altMaior << "%" << endl;
    cout << "A media de altura dos homens entre todas as pessoas: " << mediaM << endl;
    cout << "A porcentagem de mulheres com a altura menor que 1.70: " << percF << "%" << endl;
    
    return 0;
}
