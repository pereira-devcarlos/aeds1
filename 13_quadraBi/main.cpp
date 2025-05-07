/* 
 * File:   main.cpp
 * Author: 2024.2.08.001
 *
 * Created on 7 de maio de 2025, 08:41
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    int x, y, f, max, xmax, ymax;
    x= -10;
    max= -1000;
    
    while(x <= 10){
        y= -10;
        while(y <= 10){
            f= 3 * (x * x) + 2 * (y * y) - 4 * x * y + 7; 
            if(f>max){
                max = f;
                xmax = x;
                ymax = y;
            }
            y++;
        } 
        x++;
    }
    
    cout << "O valor máximo de f(x,y)= " << max << endl;
    cout << "Valores de x e y que geraram esse máximo; x= " << xmax << " e y= " << ymax << endl;
    
    return 0;
}

