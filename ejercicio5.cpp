#include <iostream>

using namespace std;

int sumaArray(int lengthArray, int array[]){
    int suma = 0;
    for (int i= 0 ; i< lengthArray; i++){
        suma += array[i];
    }
    return suma;
}

int findSuma( int lengthArray , int array[ ]){
    int min;
    min = array[0];
    int suma = sumaArray(lengthArray,array);
  for( int i = 0; i< lengthArray ; i++){
      
      if(suma -array[i] ==array[i]) {
          return array [i];
          }
  }
  
  return 0;
   
}

int main()
{
  int lengthArray;
  
  cout << "Ingrese la cantidad de elementos para el array";
  cin >> lengthArray;
  int array[lengthArray];
  int lengthArray1 = sizeof(array)/sizeof(int);
  
  
  for (int i=0; i< lengthArray; i++){
      cout << "Ingrese valor " << i<< ":";
      cin >> array [i];
      
  }
  cout<<findSuma(lengthArray1,array);
  
}
