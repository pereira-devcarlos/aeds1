# 📚 Biblioteca de Operações em Matrizes

Bem-vindo! Este repositório apresenta uma biblioteca desenvolvida para facilitar operações em matrizes quadradas de inteiros, proposta na disciplina **Algoritmos e Estruturas de Dados I (AEDS1)**.

---

## 🎯 Objetivo

Implementar uma biblioteca em C++ capaz de executar operações fundamentais em matrizes, utilizando exclusivamente **ponteiros** para manipulação dos dados.

---

## 📝 Especificação

- **Cabeçalho (.h):** Contém as assinaturas das funções.
- **Implementação (.cpp):** Contém os corpos das funções.
- **Constantes e Tipos:**
  ```cpp
  const int TAM = 128;
  typedef int Vetor[TAM][TAM];
  ```
- **Atenção:**  
  Todas as operações devem ser realizadas **apenas com ponteiros** — o uso de índices está proibido!

---

## ⚙️ Funcionalidades

A biblioteca implementa as seguintes operações com matrizes:

- 🔢 **Multiplicação por Escalar:** Multiplica todos os elementos da matriz por um valor fornecido.
- 🔄 **Transposta:** Retorna a matriz transposta.
- ↔️ **Inversão Horizontal:** Inverte as colunas (primeira ↔ última, segunda ↔ penúltima, ..., até o meio).
- ↕️ **Inversão Vertical:** Inverte as linhas (primeira ↔ última, segunda ↔ penúltima, ..., até o meio).

---

## 💻 Exemplo de Uso

```cpp
#include "matriz.h"

Vetor mat, resultado;

// Multiplicar por valor
multiplicarPorValor(mat, 2);

// Obter transposta
transporMatriz(mat, resultado);

// Inverter colunas
inverterColunas(mat);

// Inverter linhas
inverterLinhas(mat);
```

---

## 🚦 Instruções

- Utilize **apenas ponteiros** para acessar e manipular os elementos das matrizes.
- Sempre utilize a constante `TAM` e o tipo `Vetor` nas funções e parâmetros.

---

## 📂 Estrutura dos Arquivos

```
entregar-tarefas/05-operações/
├── matriz.h   // Assinaturas das funções
└── matriz.cpp // Implementação das funções
```
---

<div align="center">

Feito por Carlos Eduardo Pereira

</div>
