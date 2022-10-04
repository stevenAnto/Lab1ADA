//Se uyso C++ shell
//Libreria isotream
//Nombre : Esteven Antonio Calcina Puma
//CUI : 20074496
// Guia de Laboratorio 01
//03/02/2022

#include <iostream>
using namespace std;

void mostrarArray(int length, char array[]){
    //cout << " tama" << length;
    for (int i=0;i<length;i++){
        cout << array[i];
    }
    cout <<"\n";
}
char *joinArray(int length1, char array1[], int length2, char array2[]){
    int lengthT = length1 + length2;
    char arrayT[lengthT];
    int l=0;
    for (int i=0; i<length1;i++){
        arrayT[l]=array1[i];
        l++;
    }
    for (int i=0; i<length2;i++){
        arrayT[l]=array2[i];
        l++;
    }
    mostrarArray(lengthT, arrayT);
 return arrayT;   
}


int main()
{
  char array1[5] = {'a','b','c','d','e'};
  char array2[5] = {'v','w','x','y','z'};
  int lengthArray1 = sizeof(array1);
  //cout << "fdsa"<< lengthArray1;
  int lengthArray2 = sizeof(array2);
  char *arrayT = joinArray(lengthArray1,array1,lengthArray2,array2);
  
}
