#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> dossuma(vector<int>& numeros, int target) {
    unordered_map<int, int> mapa;  

    for (int i = 0; i < numeros.size(); i++) {
        int complemento = target - numeros[i];

        
        if (mapa.find(complemento) != mapa.end()) {
            return {mapa[complemento], i};
        }

        mapa[numeros[i]] = i;
    }

    return {}; 
}

int main() {
    vector<int> numeros = {2, 7, 11, 15};
    int target = 9;

    vector<int> resultado = dossuma(numeros, target);

    cout << "Indices: [" << resultado[0] << ", " << resultado[1] << "]" << endl;

    return 0;
}