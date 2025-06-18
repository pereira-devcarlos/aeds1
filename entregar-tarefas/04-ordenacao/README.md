# 🕜 Métodos de Ordenação com Ponteiros

Bem-vindo à tarefa 04 da disciplina de Algoritmos e Estruturas de Dados I (AEDS I)!  
Aqui você desenvolverá uma biblioteca de métodos de ordenação clássicos, utilizando **exclusivamente ponteiros** e **sem o uso de índices**.

---

## 🎯 Objetivo

Implementar algoritmos de ordenação clássicos (Bubble Sort, Selection Sort, Insertion Sort) em C++, **usando apenas ponteiros** para manipulação dos elementos, e disponibilizá-los em uma biblioteca (`.h` e `.cpp`).

---

## 📝 Regras da Tarefa

- **Nada de índices!**  
  Os algoritmos devem manipular os elementos dos vetores somente via ponteiros.
- **Organize em biblioteca:**  
  Implemente os métodos em arquivos `.h` e `.cpp` para facilitar a reutilização.
- **Entrega:**  
  Submeta apenas os arquivos da biblioteca. Não envie funções de teste ou `main`.

---

## 🗂️ Estrutura Sugerida

```
/04-ordenacao
│
├── docs/                   # PDF dos algoritmos de ordenação
│   └── algoritmos.pdf
│
├── include/                # Arquivo ordenacao.h que contém as declarações das funções
│   └── ordenacao.h
│
├── src/                    # Códigos-fonte (.cpp)
│   ├── main.cpp
│   └── ordenacao.h
│
└── README.md
```

---

## 💡 Exemplo de Interface

```cpp
// ordenacao.h
#pragma once

void bubbleSort(int* begin, int* end);
void selectionSort(int* begin, int* end);
void insertionSort(int* begin, int* end);
// Adicione outros métodos se necessário
```

```cpp
// ordenacao.cpp
#include "ordenacao.h"
// Implementações utilizando apenas ponteiros
```

---

## 🚀 Como Utilizar

1. **Inclua** os arquivos `ordenacao.h` e `ordenacao.cpp` no seu projeto.
2. **Chame** as funções de ordenação passando ponteiros para o início e fim do array.

```cpp
#include "ordenacao.h"

int main() {
    int vetor[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(vetor) / sizeof(int);
    bubbleSort(vetor, vetor + n);
    // Agora 'vetor' está ordenado!
    return 0;
}
```

---

## 🔔 Observações

- Certifique-se de que nenhum índice é utilizado, apenas ponteiros!
- Mantenha os arquivos da biblioteca organizados e identifique claramente cada função implementada.
- Revise as instruções da atividade para garantir o atendimento a todos os requisitos.

---
## 👨‍💻 Carlos Eduardo Pereira
