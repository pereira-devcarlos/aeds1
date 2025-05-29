# Exercícios de Structs em C++

Este repositório contém uma sequência de exercícios práticos sobre structs (registros) em C++. Os exercícios foram organizados em ordem crescente de dificuldade, abordando desde a declaração básica até a manipulação de arrays, filtragem de registros e structs aninhadas. São ideais para quem já conhece condicionais, laços de repetição e vetores, mas ainda não estudou funções em C++.

## Objetivo

O objetivo destes exercícios é ajudar você a dominar o conceito de structs, praticando a declaração, inicialização, leitura de dados e manipulação de arrays de structs, além de desafios envolvendo condições e organização de dados mais complexos.

## Exercícios

### 1. Declaração e Uso Básico de struct

Crie uma struct chamada `Pessoa` que contenha os campos `nome` (string) e `idade` (int).  
No programa principal, declare uma variável do tipo `Pessoa`, atribua valores a seus campos e imprima esses valores na tela.

---

### 2. Array de structs

Crie uma struct chamada `Produto` com os campos `nome` (string) e `preco` (float).  
No programa principal, crie um array de 3 produtos, leia os valores pelo teclado e depois mostre todos os produtos cadastrados na tela.

---

### 3. Encontrando o maior valor em um array de structs

Usando a struct `Produto` do exercício anterior, leia os dados de 5 produtos.  
Depois, mostre qual produto tem o maior preço e exiba seu nome e valor.

---

### 4. Calculando a média das notas

Crie uma struct chamada `Aluno` com os campos `nome` (string) e `nota` (float).  
No programa principal, crie um array para armazenar 4 alunos, leia os dados pelo teclado e depois calcule e exiba a média das notas da turma.

---

### 5. Filtrando structs com base em uma condição

Usando a struct `Aluno`, leia os dados de 5 alunos.  
Em seguida, mostre apenas os alunos que tiveram nota maior ou igual a 7.

---

### 6. Structs aninhadas (Desafio)

Crie uma struct chamada `Data` com os campos `dia`, `mes` e `ano` (todos int).  
Depois, crie uma struct chamada `Evento` que contenha um `nome` (string) e uma `data` (do tipo `Data`).  
No programa principal, leia os dados de 3 eventos e depois exiba todos eles mostrando nome, dia, mês e ano de cada evento.

---

## Como usar

1. Leia atentamente o enunciado de cada exercício.
2. Implemente a solução em um arquivo `.cpp` separado para cada exercício ou todos juntos, como preferir.
3. Compile e execute seus programas para testar as soluções.
4. Sinta-se à vontade para modificar ou expandir os exercícios para praticar ainda mais!

## Requisitos

- Conhecimento prévio de:  
  - Tipos de dados básicos em C++
  - Condicionais (`if`, `else`)
  - Estruturas de repetição (`for`, `while`)
  - Vetores (arrays)
---

Bons estudos!