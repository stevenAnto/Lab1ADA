#include <iostream>

using namespace std;

int menorArray( int lengthArray , int array[ ]){
    int min;
    min = array[0];
  for( int i = 1; i< lengthArray ; i++){
      
      if(array[i]<min) min = array[i];
  }
  cout << "minimo" << min;
  return min;
   
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
  menorArray(lengthArray1,array);
  
}
