/* 
 * File:   main.cpp
 * Author: 2024.2.08.001
 * Created on 7 de maio de 2025, 09:13
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */

int main() {
    int x, y, xmax, ymax;
    float f, expo, max;
    const float e=2.71828;
    
    x= -5;
    max= -999;
    
    while(x<=5){
        y=-5;
        while(y<=5){
            expo = - (x*x + y*y)/10.0;
            f= 10 * exp(expo) - abs(x - y);
            
            if(f >max){
                max= f;
                xmax= x;
                ymax= y;
            }
            y++;
        }
        x++;
    }
    
    cout << "O valor máximo de f(x,y)= " << max << endl;
    cout << "Valores de x e y que geraram esse máximo; x= " << xmax << " e y= " << ymax << endl;

    return 0;
}

