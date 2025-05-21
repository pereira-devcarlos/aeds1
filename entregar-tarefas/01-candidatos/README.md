# 📋 Sistema de Classificação de Candidatos

Este mini-projeto foi desenvolvido como parte da disciplina de Algoritmos e Estruturas de Dados I (AEDS I), com o objetivo de criar um sistema simples para classificar candidatos a uma vaga de emprego com base em critérios definidos de escolaridade, experiência e certificações.

---

## 💡 **Objetivo**

Desenvolver um programa capaz de receber dados de candidatos e classificá-los conforme critérios pré-estabelecidos, simulando o processo de triagem automatizada de uma empresa.

---

## 🏢 **Contexto do Problema**

Uma empresa deseja otimizar o processo de análise de currículos, categorizando os candidatos em diferentes níveis de acordo com os seguintes critérios:

### **Categorias de Candidatos**

1. **Candidato Rejeitado**
   - Idade menor que 18 anos;
   - **OU** não possui Ensino Médio completo;
   - **OU** possui menos de 1 ano de experiência **e** nenhuma certificação relevante.

2. **Candidato Júnior**
   - Ensino Médio completo;
   - **E** pelo menos 1 ano de experiência **OU** uma certificação na área.

3. **Candidato Pleno**
   - Ensino Superior completo;
   - **E** pelo menos 3 anos de experiência;
   - **OU** pelo menos 1 ano de experiência **e** duas ou mais certificações.

4. **Candidato Sênior**
   - Ensino Superior completo;
   - **E** pelo menos 5 anos de experiência **E** pelo menos uma certificação;
   - **OU** possui uma pós-graduação **E** pelo menos 3 anos de experiência.

---

## 📝 **Como o Programa Funciona**

O programa solicita ao usuário as seguintes informações:

- **Idade do candidato**
- **Nível de escolaridade**  
  (Nenhuma: `0`, Ensino Médio: `1`, Superior: `2`, Pós-graduação: `3`)
- **Anos de experiência na área**
- **Número de certificações relevantes**

Com base nesses dados, o sistema processa e exibe a classificação do candidato.

---

### **Exemplo de Entrada:**
```plaintext
Idade: 28
Escolaridade: 2
Anos de experiência: 4
Número de certificações: 2
```

### **Saída esperada:**
```plaintext
Classificação: Candidato Pleno
```

---

## 💻 **Estrutura do Código**

O código-fonte apresenta:

- **Cabeçalho:**  
  Inclui informações como local, data, autor, disciplina e objetivo.
- **Comentários Explicativos:**  
  As principais partes do código são comentadas (entre 5 e 7 linhas), facilitando o entendimento da lógica.
- **Fluxo de Decisão:**  
  Utiliza estruturas condicionais para aplicar os critérios de classificação dos candidatos.

---

## 👨‍💻 **Autor e Detalhes do Projeto**

- **Autor:** Carlos Eduardo Pereira
- **Disciplina:** Algoritmos e Estruturas de Dados I
- **Professor:** Paulo Bressan
- **Objetivo:** Desenvolver um sistema de classificação de candidatos para vagas de emprego, aplicando lógica condicional e boas práticas de programação.
