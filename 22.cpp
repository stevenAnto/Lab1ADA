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

void contarVocal(string s){
    cout << "es la palba  " << s;
    int a=0;
    int e=0;
    int i=0;
    int o=0;
    int u=0;
    
 for (int j=0; j<s.length();j++){
  cout <<"evaluando "<< s[i]<<"\n";
  switch(s[j]){
  case 'a':
  cout << "a";
 
  a++;
  
  break;
  case 'e':
cout << "e";
  e++;
  break;
  case 'i':
  cout << "i"<<i;
  i++;
  break;
  case 'o':
  cout << "o";
  o++;
  break;
  case 'u':
  cout << "u";
  u++;
  break;
  default:
  cout << "no ingreso";
  }
 }
 cout <<"a" <<a<<"\n";
 cout <<"e" <<e<<"\n";
 cout <<"i" <<i<<"\n";
 cout <<"o" <<o<<"\n";
 cout <<"u" <<u<<"\n";
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
    string s;
    cout << "Ingrese un string";
    cin >> s;
    contarVocal(s);
}
