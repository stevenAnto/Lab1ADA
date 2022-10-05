//Se uso C++ shell
//Libreria isotream
//Nombre : Esteven Antonio Calcina Puma
//CUI : 20074496
// Guia de Laboratorio 02
//0402/2022
// Example program


#include <iostream>
#include <string>
using namespace std;

class Pila{
 public:
 int length=100;
 int pila[100];
 int top = -1;
 void push (int value){
     if(top>=length-1){
      cout<<"esta lleno";
     }
     else{
      top ++;
      pila [top]=value;
     }
     
 }
 void display(){
  if(top>=0){
   cout <<"Los elementos de la pila son:";
   for (int i=top; i>=0; i--){
    cout << pila[i]<<"\n";
   }
  }
 }
};
      
 


void mostrarArray(int length, int array[]){
    //cout << " tama" << length;
    for (int i=0;i<length;i++){
        cout << array[i];
    }
    cout <<"\n";
}
int main()
{
    
    
}
