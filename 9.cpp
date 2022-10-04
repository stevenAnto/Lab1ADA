//Se uyso C++ shell
//Libreria isotream
//Nombre : Esteven Antonio Calcina Puma
//CUI : 20074496
// Guia de Laboratorio 01
//03/02/2022

#include <iostream>
using namespace std;

void mostrarArray(int length, int array[]){
    //cout << " tama" << length;
    for (int i=0;i<length;i++){
        cout << array[i];
    }
    cout <<"\n";
}
int *moverCeros(int length1, int array1[]){
    int contadorCeros=0;
    int i=0;
    for (; i<length1-contadorCeros;i++){
     if(array1[i]==0){
      array1[i]=array1[i+1]; 
      contadorCeros++;
      
     }
    
    }
    for(int j= i;j<=contadorCeros;j++){
     array1[j]=0;   
    }
    mostrarArray(length1,array1);
    return array1;
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
  moverCeros(lengthArray,array);
  
  
}
