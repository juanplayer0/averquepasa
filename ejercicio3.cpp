#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    vector<int> arreglo(n);
    int suma = 0;

    for (int i = 0; i < n; i++){
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    for (int i = 0; i < n; i++){
        suma += arreglo[i];
    }

    cout << "La suma de los elementos es: " << suma << endl;

    return 0;
}
