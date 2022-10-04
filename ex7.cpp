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
int *multiArray(int length1, int array1[]){
    cout<< "ingrese numero para multiplicar";
    int multi;
    cin >> multi;
    int arrayM[length1];
    for (int i=0; i<length1;i++){
     arrayM[i] =array1[i]*multi;   
    }
    mostrarArray(length1,arrayM);
    return arrayM;
}


int main()
{
  int array1[6] = {4,2,-3,-1,0,4};
 
  int lengthArray1 = sizeof(array1)/sizeof(int);
  cout << "fdsa"<< lengthArray1;
  
  int *arrayM = multiArray(lengthArray1,array1);
  
}
