#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "ingrese la cantidad de elementos: ";
    cin >> n;
    
    int arreglo[n];
    int suma = 0;

    for (int i=0; i <n; i++){
        cout << "ingrese el elemento" << i + 1 << ": ";
        cin >> arreglo[i];
    }
    
    for (int i = 0; i < n; i++){
        suma += arreglo[i];
    }
    cout << "la suma de los elementos es: " << suma << endl;

    return 0;
}
