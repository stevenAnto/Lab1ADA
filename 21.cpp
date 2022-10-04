//Se uyso C++ shell
//Libreria isotream
//Nombre : Esteven Antonio Calcina Puma
//CUI : 20074496
// Guia de Laboratorio 02
//04/02/2022
// Example program

#include <iostream>
#include <string>
using namespace std;

void mostrarImpar(int length, int array[]){
 for (int i=0; i< length ; i++){
  if(array[i]%2!=0) cout << "El elemento" << i<< "es impar"<<"\n";
 }
}

void mostrarArray(int length, int array[]){
    //cout << " tama" << length;
    for (int i=0;i<length;i++){
        cout << array[i];
    }
    cout <<"\n";
}
int main()
{
 
  int array[10];
  int lengthArray = sizeof(array)/sizeof(int);
  //cout <<"tamanio" << lengthArray1;
  
  for (int i=0; i< lengthArray; i++){
      cout << "Ingrese valor " << i<< ":";
      cin >> array [i];
      //cout << "\n"<<array[i];
  }
  mostrarImpar(lengthArray, array);
}
