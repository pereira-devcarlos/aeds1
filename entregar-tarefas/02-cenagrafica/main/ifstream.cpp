/* 
 * Arquivo:   main.cpp
 * Autor: 2024.2.08.001
 * Name:Carlos Eduardo Pereira dos Santos
 * Disciplina: AEDs I (Prática)
 * Criado em 25 de abril de 2025, 10:00
 * Local: Unifal Santa Clara
 
    Objetivo:
 - Calcular a área e o volume total das figuras geométricas apartir da descrição de uma cena gráfica com todas 
   as figuras geométricas e medidas que o usuário desejou.
 */

#include <iostream>
#include <fstream>
#include <iomanip> // Usada para formatação de saída de 2 casa após a virgula (setprecision, fixed)
#include <cmath>   // Usada para a função matemática "sqrt" para raiz quadrada
#include <string>  // Usada para a classe string

using namespace std;

/*
 * 
 */
int main() {
    // Declaração de variáveis
    float raio, altura, aresta, geratriz, area, volume,
          volumeTotal=0,
          areaTotal=0;
    
    const float PI=3.14159265359; // Constante de valor fixo para PI
    cout << fixed << setprecision(2); // Configura cout para exibir números com 2 casas decimais
    
    string cenagrafica; 
    ifstream arquivo ("cenagrafica.txt"); // Abre o arquivo de leitura
    
    // Verifica se o arquivo foi aberto corretamente
    if(!arquivo.is_open()){             
        cout << "\nErro: arquivo não encontrado.\n";
        return 1; // Encerra o programa com erro
    }
    
    cout << "\n\n\tCena Gráfica" << endl;
    
    // Loop principal: lê uma figura por vez do arquivo até encontrar "fim"
    while(cenagrafica != "fim"){
        arquivo >> cenagrafica;
        
        if(cenagrafica == "quadrado"){
            arquivo >> aresta;
            
            area = aresta * aresta;
            
            cout << "\n   Quadrado" << endl;
            cout << "Área: " << area << endl;
            cout << "Volume: é só para objetos tridimensionais." << endl;
            
            areaTotal += area;
        }
        else if(cenagrafica == "cubo"){
            arquivo >> aresta;
            
            area = 6 * (aresta * aresta);
            volume = aresta * aresta * aresta;
            
            cout << "\n   Cubo" << endl;
            cout << "Área: " << area << endl;
            cout << "Volume: " << volume << endl;
            
            areaTotal += area;
            volumeTotal += volume;
        }
        else if (cenagrafica == "circulo"){
            arquivo >> raio;
            
            area= PI*(raio * raio);
            
            cout << "\n   Circulo" << endl;
            cout << "Área: " << area << endl;
            cout << "Volume: é só para objetos tridimensionais." << endl;
            
            areaTotal += area;
        }
        else if (cenagrafica == "esfera"){
            arquivo >> raio;
            
            area = 4 * PI *(raio * raio);
            volume = (4 * PI *(raio * raio * raio)) / 3;
            
            cout << "\n   Esfera" << endl;
            cout << "Área: " << area << endl;
            cout << "Volume: " << volume << endl;
            
            areaTotal += area;
            volumeTotal += volume;
        }
        else if (cenagrafica == "cilindro") {
            arquivo >> raio;
            arquivo >> altura;
            
            area = 2*PI * (raio * (raio+altura));
            volume = PI * (raio * raio) * altura;
            cout << "\n   Cilindro" << endl;
            cout << "Área: " << area << endl;
            cout << "Volume: " << volume << endl;
            
            areaTotal += area;
            volumeTotal += volume;
        }
        else if (cenagrafica == "triangulo"){
            //Seja raio=aresta1, altura=aresta2, aresta=aresta3;
            
            arquivo >> raio;
            arquivo >> altura;
            arquivo >> aresta;
            cout << "\n   Triângulo" << endl;
            
            // Verifica se os lados formam um triângulo válido
            if (raio+altura > aresta && raio+aresta > altura && aresta+altura > raio){
                
                //Sqrt para transformar tudo em raiz para a fórmula de Heron
                area = sqrt( 
                    (raio + altura + aresta) / 2 *
                    ((raio + altura + aresta) / 2 - raio) *
                    ((raio + altura + aresta) / 2 - altura) *
                    ((raio + altura + aresta) / 2 - aresta));
                
                cout << "Área: " << area << endl;
                cout << "Volume: é só para objetos tridimensionais." << endl;
                
                areaTotal += area;
            }
            //Mensagem de erro para valores inválidos para um triângulo
            else {
                cout << "Valores inválidos para um triângulo." << endl;
            }
        }
        else if (cenagrafica == "piramide"){
            arquivo>> aresta;
            arquivo>> altura;
            
            area = (aresta * aresta) + ((aresta * altura)/2) * 4;
            volume = ((aresta * aresta) * altura)/3;
            
            cout << "\n   Pirâmide" << endl;
            cout << "Área: " << area << endl;
            cout << "Volume: " << volume << endl;
            
            areaTotal += area;
            volumeTotal += volume;
        }
        else if (cenagrafica == "retangulo"){
            arquivo >> aresta;
            arquivo >> altura;
            
            area = aresta * altura;
            
            cout << "\n   Retângulo" << endl;
            cout << "Área: " << area << endl;
            cout << "Volume: é só para objetos tridimensionais." << endl;
            
            areaTotal += area;
        }
        else if (cenagrafica == "paralelepipedo"){
            arquivo >> raio;
            arquivo >> altura;
            arquivo >> aresta;
            
            area = 2*(raio*altura + raio*aresta + altura*aresta);
            volume = raio * altura * aresta;
            
            cout << "\n   Paralelepípedo" << endl;
            cout << "Área: " << area << endl;
            cout << "Volume: " << volume << endl;
            
            areaTotal += area;
            volumeTotal += volume;
        }
    }
    
    // Exibe o total de áreas e volumes calculados
    cout << "\n   Dados Cena Gráfica" << endl;
    cout << "Área Total: " << areaTotal << endl;
    cout << "Volume Total: " << volumeTotal << endl;
    
    arquivo.close();
    return 0;
}

