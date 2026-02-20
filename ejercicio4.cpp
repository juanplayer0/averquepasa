#include <iostream>
using namespace std;

bool espalindromo(int x){
    if (x < 0 || (x % 10 == 0 && x != 0))
    return false;

    int medioreverso = 0;
    while (x > medioreverso){
        medioreverso = medioreverso * 10 + x % 10;
        x /= 10;
    }

    return (x == medioreverso || x == medioreverso / 10);

}
int main(){
    
    int x;
    cout << "ingrese un numero: ";
    cin >> x;

    if (espalindromo(x))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}
