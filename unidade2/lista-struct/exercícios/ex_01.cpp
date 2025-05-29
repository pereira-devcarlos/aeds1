#include <iostream>

using namespace std;

int main(){
    int numbers[10];

    for (int i = 0; i < 10; i++){
        cin >> numbers[i];
    }
    
    for (int i = 0; i < 10; i++){
        cout << "Vetor " << i+1 << " " << numbers[i] << endl; 
    }
    

    return 0;
}
