// Primer ejercicio
#include <iostream>

using namespace std;

int main()
{
  int lengthArray;
  
  cout << "Ingrese la cantidad de elementos para el array";
  cin >> lengthArray;
  int array[lengthArray];
  int multiplicado=1;
  for (int i=0; i< lengthArray; i++){
      cout << "Ingrese valor " << i<< ":";
      cin >> array [i];
      multiplicado = multiplicado * array[i];
  }
  cout << multiplicado;
  return multiplicado;
}

// Ejercicio2
#include <iostream>

using namespace std;



void mostrarOrden( int array[2]){
    //int tamanio = sizeof(array)/ sizeof(int);
    for (int i = 0; i < 5 ;i++){
        cout << i <<"->"<< array[i]<<"\n";
    }
}
int main()
{
    int arrayPrueba []={1,2,8,9,5};
    mostrarOrden (arrayPrueba);
}
