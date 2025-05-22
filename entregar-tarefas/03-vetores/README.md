# 📊 Atividade: Operações em Vetor de 100 Posições

## 📝 Descrição

Este projeto consiste em um programa em **C++** que permite ao usuário armazenar valores inteiros em um vetor de até **100 posições** e realizar diversas operações interativas através de um menu amigável.

---

## 🚀 Funcionalidades

- **Inserção inicial** de valores inteiros no vetor (até 100).
- **Contagem** de quantas vezes um valor específico aparece (com exibição das posições).
- **Contagem** de valores em um intervalo informado (com exibição das posições).
- **Busca** pela primeira ocorrência de um valor (com exibição da posição).
- **Exclusão** da primeira ocorrência de um valor (deslocando os elementos à esquerda).
- **Inserção** de um valor em uma posição específica (se houver espaço).
- **Remoção de todos os valores repetidos** do vetor.
- **Exibição do vetor atualizado** após cada operação.
- **Menu interativo**: o usuário pode realizar quantas operações quiser até optar por sair.

---

## 💻 Como Executar

1. **Compile o programa:**

   ```sh
   g++ -o main main.cpp
   ```

2. **Execute o programa:**

   ```sh
   ./main
   ```

3. **Siga as instruções exibidas no menu do terminal.**

---

## 🖥️ Exemplo de Uso

```
==== Preenchimento do vetor ====
Quantos valores deseja inserir inicialmente? (máx 100): 5
Digite o valor da posição 1: 3
Digite o valor da posição 2: 5
Digite o valor da posição 3: 7
Digite o valor da posição 4: 5
Digite o valor da posição 5: 5

======= Menu de Operações =======
[1]-Contar ocorrências de um valor
[2]-Contar ocorrências de valores em um intervalo
[3]-Buscar primeira ocorrência de um valor
[4]-Excluir primeira ocorrência de um valor
[5]-Inserir valor em uma posição
[6]-Retirar todos os valores repetidos
[0]-Sair
Escolha uma opção: 1

Informe o valor a ser contado: 5
Foram encontradas 3 ocorrências do valor 5 nas:
Posição 2 (valor: 5)
Posição 4 (valor: 5)
Posição 5 (valor: 5)
```

---

## 🛠️ Observações

- O código está **totalmente comentado** para facilitar o entendimento.
- O vetor é de **tamanho máximo** (100 elementos).

---

## 👤 Autor

- **Nome:** Carlos Eduardo Pereira
- **Matrícula:** 2024.2.08.001

---
