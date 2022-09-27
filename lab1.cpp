// Example program
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
