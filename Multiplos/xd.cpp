#include <iostream>
using namespace std;
int main () {
  int n1; 
  int n2; 

  cout << "Bienvenido a su dictor de numeros mayor y menor, y confirmaremos si el mayor es multiplo del menor." << endl; 
  cout << "Escoja su primer numero:" << endl; 
  cin >> n1;
  cout << "Escoja su segundo numero: " << endl; 
  cin >> n2;
  
  if (n1 > n2) {
    cout << "El mayor es " << n1 << endl;
    if (n1 % n2 == 0)
    {
      cout << "Es multiplo." << endl;
    }
    else {
      cout << "No es multiplo." << endl;
    }
    
  }

  else {
    cout << "El mayor es " << n2;
    if (n2 % n1 == 0)
    {
      cout << "Es multiplo." << endl;
    }
    else {
      cout << "No es multiplo" << endl;
    }
  }
}