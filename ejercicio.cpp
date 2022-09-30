#include <iostream>

using namespace std;

void mostrarInverso( int lengthArray , int array[ ]){
    
    for (int i=lengthArray -1; i>=0  ;i--){
      
      cout << ":"<<array[i]<<"\n" ;
  }
   
}

int main()
{
  int lengthArray;
  
  cout << "Ingrese la cantidad de elementos para el array";
  cin >> lengthArray;
  int array[lengthArray];
  int lengthArray1 = sizeof(array)/sizeof(int);
  //cout <<"tamanio" << lengthArray1;
  
  for (int i=0; i< lengthArray; i++){
      cout << "Ingrese valor " << i<< ":";
      cin >> array [i];
      //cout << "\n"<<array[i];
  }
  mostrarInverso(lengthArray1,array);
  
}
