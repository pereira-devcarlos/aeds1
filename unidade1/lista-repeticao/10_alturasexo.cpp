#include <iostream>             
#include <iomanip>              // Para formatar a saída (ex: casas decimais)
#include <limits>               // Para manipular limites do tipo de dados (usado para limpar input inválido)

using namespace std;

int main() {
    // Declaração de variáveis
    float altura, total, alturaM, mediaM, percF, altMaior;
    char sexo = ' ';

    // Formatação: 2 casas decimais fixas
    cout << setprecision(2) << fixed;

    // Inicializações
    percF = 0;      // Contador de mulheres com altura < 1.70
    mediaM = 0;     // Contador de homens
    alturaM = 0;    // Soma das alturas dos homens
    total = 0;      // Contador de todas as pessoas
    altMaior = 0;   // Contador de pessoas com altura > 1.80

    // Primeira entrada de altura
    cout << "\nDigite sua altura: ";
    cin >> altura;

    // Tratamento de erro: se a entrada for inválida (ex: letra)
    while (cin.fail()) {
        cout << "Erro: Entrada invalida. Por favor, digite um numero para a altura: ";
        cin.clear(); // Limpa o estado de erro
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer
        cin >> altura;
    }

    // Verifica se a altura está dentro do intervalo válido (1.00m a 2.30m)
    while (altura < 1 || altura > 2.30) {
        if (altura == 0)
            break; // 0 é usado como condição de parada

        cout << "Erro: digite uma altura de 1.00m a 2.30m: ";
        cin >> altura;
    }

    // Se altura for diferente de 0, solicita o sexo
    if (altura != 0) {
        cout << "Digite seu sexo, (F)Feminino ou (M)Masculino: ";
        cin >> sexo;
        sexo = toupper(sexo); // Converte para maiúscula

        // Validação do sexo
        while (sexo != 'F' && sexo != 'M') {
            cout << "Erro: Sexo invalido. Digite F ou M: ";
            cin >> sexo;
            sexo = toupper(sexo);
        }
    }

    // Loop principal: continua até que a altura digitada seja 0
    while (altura != 0) {
        // Contabiliza quem tem mais de 1.80m
        if (altura > 1.8) {
            altMaior++;
        }

        // Se for homem, acumula altura e conta
        if (sexo == 'M') {
            alturaM += altura;
            mediaM++;
        }

        // Se for mulher e tiver menos de 1.70m, conta
        if (sexo == 'F' && altura < 1.7) {
            percF++;
        }

        // Solicita próxima altura
        cout << "\nDigite sua altura: ";
        cin >> altura;

        // Tratamento de erro de entrada inválida
        while (cin.fail()) {
            cout << "Erro: Entrada invalida. Por favor, digite um numero para a altura: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> altura;
        }

        // Valida intervalo da altura
        while (altura < 1 || altura > 2.30) {
            if (altura == 0)
                break;

            cout << "Erro: digite uma altura de 1.00m a 2.30m: ";
            cin >> altura;
        }

        // Se altura for válida, pede o sexo
        if (altura != 0) {
            cout << "Digite seu sexo, (F)Feminino ou (M)Masculino: ";
            cin >> sexo;
            sexo = toupper(sexo);
            while (sexo != 'F' && sexo != 'M') {
                cout << "Erro: Sexo invalido. Digite F ou M: ";
                cin >> sexo;
                sexo = toupper(sexo);
            }
        }

        // Contabiliza total de pessoas
        if (altura != 0) {
            total++;
        }
    }

    // Cálculos finais
    altMaior = (altMaior * 100.0) / total;       // % com altura > 1.80
    mediaM = (mediaM > 0) ? (alturaM / mediaM) : 0; // Média de altura dos homens
    percF = (percF * 100.0) / total;             // % de mulheres com altura < 1.70

    // Exibição dos resultados
    cout << "\nA porcentagem de pessoas com a altura maior que 1.80: " << altMaior << "%" << endl;
    cout << "A media de altura dos homens entre todas as pessoas: " << mediaM << "m" << endl;
    cout << "A porcentagem de mulheres com a altura menor que 1.70: " << percF << "%" << endl;

    return 0;
}
