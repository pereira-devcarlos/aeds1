#include <iostream>

using namespace std;

const int TAM = 4;
typedef int Vetor[TAM][TAM];

// Multiplica todos os elementos da matriz por um valor
void multiplicar(Vetor* m, int valor) {
    int* p = &(*m)[0][0];
    int* fim = p + TAM * TAM;

    while (p < fim) {
        *p *= valor;
        p++;
    }
}

// Transpõe a matriz (sem usar índices)
void transposta(Vetor* m, Vetor* resultado) {
    int* pOrigem = &(*m)[0][0];

    int linha = 0;
    while (linha < TAM) {
        int coluna = 0;
        while (coluna < TAM) {
            // ponteiros base para cálculo das posições
            int* pDestino = &(*resultado)[0][0] + coluna * TAM + linha;
            *pDestino = *(pOrigem + linha * TAM + coluna);
            coluna++;
        }
        linha++;
    }
}

// Inverte as colunas horizontalmente
void inverterColunas(Vetor* m) {
    int* linha = &(*m)[0][0];
    int linhaAtual = 0;

    while (linhaAtual < TAM) {
        int* esq = linha;
        int* dir = linha + TAM - 1;

        while (esq < dir) {
            int tmp = *esq;
            *esq = *dir;
            *dir = tmp;
            esq++;
            dir--;
        }

        linha += TAM;
        linhaAtual++;
    }
}

// Inverte as linhas verticalmente
void inverterLinhas(Vetor* m) {
    int* topo = &(*m)[0][0];
    int* baixo = topo + (TAM - 1) * TAM;

    int linhasProcessadas = 0;

    while (linhasProcessadas < TAM / 2) {
        int* pt = topo;
        int* pb = baixo;
        int count = 0;

        while (count < TAM) {
            int temp = *pt;
            *pt = *pb;
            *pb = temp;

            pt++;
            pb++;
            count++;
        }

        topo += TAM;
        baixo -= TAM;
        linhasProcessadas++;
    }
}

int main() {
    // Exemplo com TAM pequeno para facilitar o teste
    const int N = 4;
    int matriz[TAM][TAM];

    // Preenche a matriz com valores sequenciais
    int valor = 1;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            matriz[i][j] = valor++;

    // Função para imprimir a matriz
    auto imprime = [&](int m[TAM][TAM]) {
        for (int i = 0; i < TAM; ++i) {
            for (int j = 0; j < TAM; ++j)
                cout << m[i][j] << "\t";
            cout << endl;
        }
        cout << endl;
    };

    cout << "Matriz original:\n";
    imprime(matriz);

    // Testa multiplicar
    Vetor* mptr = reinterpret_cast<Vetor*>(&matriz);
    multiplicar(mptr, 3);
    cout << "Matriz multiplicada por 2:\n";
    imprime(matriz);

    // Testa inverter colunas
    inverterColunas(mptr);
    cout << "Matriz com colunas invertidas:\n";
    imprime(matriz);

    // Testa inverter linhas
    inverterLinhas(mptr);
    cout << "Matriz com linhas invertidas:\n";
    imprime(matriz);

    // Testa transposta
    int resultado[N][N];
    Vetor* rptr = reinterpret_cast<Vetor*>(&resultado);
    transposta(mptr, rptr);
    cout << "Matriz transposta:\n";
    imprime(resultado);

    return 0;
}
