#include <iostream>
#define   M   10
using namespace std;


class matrices {
     int   tabla[M];


     public:
        void   cargar();  //Pondr� en cada elemento de la tabla el valor de su �ndice.
        bool   encontrar();  //Pedir� un n�mero entero por teclado y devolver� true si ese
                            //n�mero est� en la tabla, en caso contrario devolver� false.


};

void matrices::cargar(){

for(int i=0;i<M;i++){
    cout<<"Introduzca el valor que estan en la posicion ["<<i<<"]: ";
    cin>>tabla[i];
        }



    }

bool matrices::encontrar(){

int num;
bool encontrado=false;
int i=0;


cout<<"\nIntroduzca el numero que quiere buscar: ";
cin>>num;
while((i<M)&& !encontrado){
    if(tabla[i]==num)
    encontrado = true;
else
    i++;

}

return encontrado;


}



int main()
{
    bool encontrado;

    matrices matriz;
    matriz.cargar();
    encontrado = matriz.encontrar();

    if(encontrado)
        cout<<"\nEl numero esta en la tabla.\n";
    else
        cout<<"\nNo esta.\n";

    return 0;
}
