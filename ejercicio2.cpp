#include <iostream>
#include <cmath>
int main(){
    double capital, tasa, monto;
    int tiempo;
    cout << "ingrese el capital inicial aqui";
    cin >> capital;
    cout << "ingrese la tasa de interes:";
    cin >> tasa;
    cout <<"ingrese el numero de periodos: ";
    cin >> tiempo;
    monto = capital * pow((1+tasa), tiempo);
    cout << "el monto final es:" <<monto <<endl;
    return 0;
}
