#include <stdio.h>

// Definição da struct Turmas, que armazena matrícula e duas notas
struct Turmas {
    int matricula;
    float nota1, nota2;
};

int main(){
    // Inicializa um vetor de 30 alunos com matrícula e duas notas cada
    struct Turmas turma[30] = {
        {1001, 8.5, 7.0}, {1002, 7.2, 6.5}, {1003, 9.1, 8.8}, {1004, 6.8, 7.3},
        {1005, 7.9, 8.0}, {1006, 5.5, 6.0}, {1007, 8.0, 7.5}, {1008, 6.0, 5.8},
        {1009, 7.7, 8.2}, {1010, 9.5, 9.0}, {1011, 8.3, 7.9}, {1012, 7.0, 6.7},
        {1013, 6.2, 7.1}, {1014, 8.8, 8.5}, {1015, 7.4, 7.0}, {1016, 5.9, 6.3},
        {1017, 8.1, 8.4}, {1018, 6.5, 7.2}, {1019, 9.0, 8.7}, {1020, 7.6, 7.8},
        {1021, 8.7, 8.9}, {1022, 6.3, 6.8}, {1023, 7.8, 7.5}, {1024, 5.7, 6.1},
        {1025, 8.2, 8.0}, {1026, 7.1, 7.3}, {1027, 6.9, 7.4}, {1028, 8.4, 8.6},
        {1029, 7.3, 7.2}, {1030, 9.2, 9.1}
    };

    printf("\nResultado das notas:");
    // Calcula e exibe a média de cada aluno
    for (int i = 0; i < 30; i++){
        float media = (turma[i].nota1 + turma[i].nota2) / 2;
        printf("\nAluno %d:\nRA: %d\nMedia: %.2f\n", i+1, turma[i].matricula, media);
    }

    return 0;
}
