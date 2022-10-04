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
bool  findSuma0(int length1, int array1[]){
    bool fond=false;
    int suma=0;
    for (int i=0;i<length1;i++){
        for(int j = i; j<length1;j++){
            for(int k=i;k <j;k++){
             suma += array1[k];   
            }
            if(suma ==0) {
                fond = true;
                return fond;
                };
        }
    }

 return fond;   
}


int main()
{
  int array1[6] = {4,2,-3,-1,0,4};
 
  int lengthArray1 = sizeof(array1)/sizeof(int);
  //cout << "fdsa"<< lengthArray1;
  
  cout <<"encontro"<<findSuma0(lengthArray1,array1);
  
}
  
