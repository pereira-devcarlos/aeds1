#include <iostream>
#include <string>

using namespace std;

int main(){
    //Declarando variáveis
    string sangue, rh;     //Tipo sanguineo e RH positivo ou negativo
    int pMax, pMin, idade, total;
    float percAB, percAlta;

    // Inicializando os valores das porcentagens
    percAB=0;
    percAlta=0;
    total=0;

    cout << "\tPesquisa" << endl;
    cout << "Caso deseja encerrar a pesquisa digite (FIM) em tipo sanguineo!" << endl;

    cout << "\nDigite seu tipo sanguineo: ";
    cin >> sangue;
    if(sangue=="fim"){
        sangue="FIM";
    }

    // Repetição principal para encerrar assim que o usuário digitar "fim"
    while (sangue!="FIM"){

        //Repetição para validar os tipos sanguineos
        while (sangue!="O" && sangue!="A" && sangue!="B" && sangue!="AB" && sangue!="FIM"){
            cout << "\nErro: tipo sanguineo invalido!!" << endl;
            if (sangue=="o" || sangue=="a" || sangue=="b" || sangue=="ab" || sangue=="fim"){
                cout << "Voce digitou com letra minuscula, por gentileza utilize letras maiusculas!" << endl;
            }
            
            cout << "Digite seu tipo sanguineo: ";
            cin >> sangue;
        }

        cout << "Digite seu RH positivo\"+\" ou negativo\"-\": ";
        cin >> rh;

        //Repetição para validar os dados do RH
        while (rh!="+" && rh!="-"){
            cout << "\nErro: RH invalido!" << endl;
            cout << "Digite seu RH positivo\"+\" ou negativo\"-\": ";
            cin >> rh;
        }
        
        cout << "Digite sua pressao arterial maxima: ";
        cin >> pMax;
        // Repetição para validar a pressão máxima
        while (pMax<7 || pMax>25){
            cout << "\nErro: pressao invalida!" << endl;
            cout << "Digite sua pressao arterial maxima: ";
            cin >> pMax;
        }
        
        cout << "Digite sua pressao minima: ";
        cin >> pMin;
        // Repetição para validar a pressão mínima
        while (pMin<2 || pMin>20){
            cout << "\nErro: pressao invalida!" << endl;
            cout << "Digite sua pressao arterial minima: ";
            cin >> pMin;
        }

        cout << "Digite sua idade: ";
        cin >> idade;
        // Repetição para validar a idade
        while (idade<18 || idade>130){
            cout << "\nErro: idade invalida!" << endl;
            cout << "Digite sua idade: ";
            cin >> idade;
        }

        // Contabilizando dados baseado nessas condicionais
        if ((sangue=="A" && rh=="-") || (sangue=="B" && rh=="-")){
            percAB++;
        }
        if (pMax>14 || pMin>10){
            percAlta++;
        }        

        // Coletando o tipo sanguineo novamente para retornar ou encerrar o loop
        cout << "\nDigite seu tipo sanguineo: ";
        cin >> sangue;
        if(sangue=="fim"){
            sangue="FIM";
        }

        total++;
    }

    // Calcular as porcentagens a seguir
    percAB = percAB * 100.0 / total;
    percAlta = percAlta * 100.0 / total;

    // Resultados finais
    cout << "\nPorcentagem de pessoas com sangue A- ou B-: " << percAB << "%" << endl;
    cout << "Porcentagem de pessoas com a pressao alta: " << percAlta << "%" << endl;
    
    return 0;
}
