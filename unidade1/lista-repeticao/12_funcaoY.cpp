/* 
 * File:   main.cpp
 * Author: 2024.2.08.001
 *
 * Created on 7 de maio de 2025, 08:18
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    int x, h, f, g, y;
    x=1;
    g=0;
    
    cout << "Tabela Função y = f(x) + g(x) \n" << endl;
    
    while(x<=10){
        //Função h(x)
        h= x * x - 16;
        
        //Condicional para função f(x)
        if(h>=0){
            f = h;
            if(f == 0){
                //Condicional para função g(x)
                g= x * x + 16;
            }else{
                g= 0;
            }
        }else{
            f = 1;
        }
        //Calculando f(y)
        y = f + g;
        
        cout << "x= " << x << "; função y= " << f << " + " << g << " ; y= " << y << endl;
        x++;
    }

    return 0;
}

