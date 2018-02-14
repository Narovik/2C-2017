#include <iostream>

using namespace std;

class Numero {
    int a,b;
public:
    void informacion(); //pedir� dos valores enteros por teclado almacen�ndolos en a y b.
    int mcd(); /*m�todo mcd devolver� el m�ximo com�n divisor de a y b,
     aplicando el algoritmo sencillo de Euclides
     que dice que si a es mayor que b entonces a = a � b
     y si b es mayor que a entonces b = b � a y esto se repite
    hasta que a y b son iguales, momento en el que el m�ximo com�n divisor es a */
};

void Numero::informacion(){
    cout << "Introduce el primer numero -> ";
    cin >> a;
    cout << "Introduce el segundo numero -> ";
    cin >> b;

}

int Numero::mcd(){
    while(a != b){
        if( a > b) a = a - b;
        else if ( b > a) b = b - a;
    }
return a;
}

int main(){
setlocale(LC_ALL, "");

Numero n;
n.informacion();
cout << "El mcd es: "<< n.mcd();

}
