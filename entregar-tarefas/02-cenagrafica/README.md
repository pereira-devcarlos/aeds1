# Projeto: Cena Gráfica — AEDs I

> **Objetivo:**  
Gerar a descrição de uma cena gráfica composta por figuras geométricas, salvar os dados em arquivo e calcular a área e o volume totais da cena.

---

## ✨ Descrição

Este projeto está dividido em **dois programas** principais:

1. **Gerador de Cena Gráfica:**  
   Permite ao usuário descrever figuras (2D ou 3D) de uma cena gráfica por meio de um menu interativo e salva essas informações em um arquivo-texto (ex: `cenagrafica.txt`).

2. **Calculador de Área e Volume:**  
   Lê o arquivo gerado e calcula a **área** e o **volume total** da cena gráfica apresentada.

---

## 📄 Estrutura do Arquivo de Entrada

O arquivo gerado (`cenagrafica.txt`) terá o seguinte formato:

- **Cada linha**: representa uma figura geométrica, iniciando pelo nome do objeto (ex: `quadrado`, `cilindro`, `esfera`, etc.), seguido dos valores de seus parâmetros, separados por espaço.
- **Ordem dos parâmetros**:  
  - Primeiro o raio (se houver),  
  - Em seguida lados e altura, conforme a figura.
- **Fim do arquivo**:  
  A palavra `fim` indica o término da lista de figuras. Qualquer linha após `fim` será desconsiderada.

**Exemplo:**
```
quadrado 5
circulo 3
cubo 2
cilindro 2 5
fim
```

---

## 🧩 Figuras Suportadas

- **2D:** quadrado, retângulo, triângulo, círculo, etc.
- **3D:** cubo, paralelepípedo, cilindro, cone, esfera, etc.

> **Observação:**  
> Adicione comentários no cabeçalho e nas principais linhas do código para facilitar a compreensão.

---

## 🚀 Como Usar

1. **Clone o repositório:**
   ```bash
   git clone https://github.com/pereira-devcarlos/aeds1.git
   cd aeds1/entregar-tarefas/02-cenagrafica
   ```

2. **Compile os programas**  
   Compile ambos os arquivos `main.cpp` (um para o gerador e outro para o calculador):

   ```bash
   # Gerador de cena gráfica
   g++ main.cpp -o gerador

   # Calculador de área e volume (em outro diretório ou arquivo, se aplicável)
   g++ main.cpp -o calculador
   ```

3. **Execute o Gerador para criar o arquivo da cena:**
   ```bash
   ./gerador
   ```
   Siga o menu para adicionar figuras e salvar o arquivo.

4. **Execute o Calculador para obter área e volume totais:**
   ```bash
   ./calculador
   ```
   O programa lerá `cenagrafica.txt` e apresentará os resultados.

---

## 📦 Entrega

- Envie os arquivos `main.cpp` de **cada projeto** desenvolvido na Atividade 02 do Classroom.
- Não se esqueça dos **comentários** no código!

---

## 💡 Dicas

- Use funções para cálculo de área e volume de cada figura.
- Valide as entradas do usuário.
- Capriche nos comentários para facilitar a correção.

---

## 👨‍💻 Autor

- **Carlos Eduardo Pereira**  
