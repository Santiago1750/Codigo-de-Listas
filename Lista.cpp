# Codigo-de-Listas

Dentro de este repositorio se mostrara un ejercicio con listas en C++

##Ejercicio de Listas

  #include <iostream>
  #include <list>
using namespace std;
int sum(const list<int>& lista){
int suma = 0;
  for(int elemento: lista){
    suma+=elemento;
  }
  return suma;
}
int main() {
  list<int> mi_lista = {1,2,3,4,5,6};
  int resultado = sum(mi_lista);
  cout<<"La suma de los elementos es: "<< resultado<<endl;
  return 0;
}
