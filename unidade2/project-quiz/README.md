# 📌 Quiz de Programação em C++  
**Um quiz interativo com ranking, feito com vetores, condicionais e loops!**  

<div align="center">
  <img src="https://img.shields.io/badge/Linguagem-C%2B%2B-blue?style=for-the-badge&logo=c%2B%2B" />
  <img src="https://img.shields.io/badge/Tópicos-Vetores%2C%20Condicionais%2C%20Loops-orange?style=for-the-badge" />
</div>

## 🎯 Objetivo  
Desenvolver um quiz de programação em C++ que:  
- Testa conhecimentos com perguntas de múltipla escolha  
- Calcula a pontuação do jogador  
- Armazena um ranking dos melhores jogadores  

## ⚙️ Funcionalidades  
✔ Menu interativo (Jogar, Ver Ranking, Sair)  
✔ 10 perguntas sobre C++ com respostas aleatórias  
✔ Sistema de pontuação (+10 pontos por resposta certa)  
✔ Ranking com os top 3 jogadores  
✔ Feedback personalizado no final  

## 📋 Estrutura do Projeto  
```plaintext
quiz_cpp/
├── README.md            # Este arquivo
├── main.cpp             # Código principal
└── perguntas.txt        # Banco de perguntas (opcional)
``` 

## 🔧 Como Usar  
1. **Compilar e executar**:  
   ```bash
   g++ main.cpp -o quiz
   ./quiz
   ```

2. **Menu principal**:  
   ```
   [1] Jogar
   [2] Ver Ranking  
   [3] Sair
   ```

3. **Responder perguntas**:  
   - Digite A, B, C ou D para cada questão  
   - Receba feedback imediato  

4. **Resultados**:  
   - Veja sua pontuação final  
   - Confira se entrou no ranking  

## 📝 Banco de Perguntas  
O quiz inclui questões como:  
```markdown
1. Qual comando imprime no console em C++?  
   A) print()  
   B) console.log()  
   C) cout << [CORRETA]  
   D) printf()  

2. Como declarar um vetor de 5 inteiros?  
   A) int vetor[5]; [CORRETA]  
   B) vector<int> vetor(5);  
   ... (10 no total)
```

## 🚀 Desafios Extras  
```markdown
- [ ] Adicionar 20+ perguntas  
- [ ] Implementar cronômetro por questão  
- [ ] Sistema de dicas (3 por jogo)  
- [ ] Salvar ranking em arquivo  
- [ ] Adicionar temas (C++, Python, Java)  
```

## 📌 Requisitos Técnicos  
**Bibliotecas C++**:  
```cpp
#include <iostream>  // E/S básica
#include <fstream>   // Leitura de dados externos
#include <vector>    // Armazenamento
#include <algorithm> // Ordenação
#include <ctime>     // Acesso ao horário
#include <stdlib.h>  // Aleatoriedade
```

**Conceitos aplicados**:  
- Vetores/arrays  
- Condicionais aninhadas  
- Loops (while/for)  
- Funções void  
- Structs para ranking  

## 📄 Licença  
```plaintext
MIT License
Copyright (c) 2023 Carlos Pereira

Permissão é concedida gratuitamente para qualquer pessoa que obtenha uma cópia deste software e arquivos de documentação associados, para lidar com o Software sem restrições, incluindo direitos de usar, copiar, modificar, mesclar, publicar, distribuir, sublicenciar e/ou vender cópias do Software.
```

<div align="center">
  <p>Desenvolvido por <strong>Carlos Pereira</strong></p>
</div>
