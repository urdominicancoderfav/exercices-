#include <iostream>
using namespace std;
/*
Convertir calificación numérica a alfabética en C++*/
int main () {
  int nota; 
  cout << "Bienvenido a tu programa de nota." << endl; 
  cout << "Dinos tu nota: " << endl; 
  cin >> nota; 

  if (nota < 5) {
    cout << "Tu nota es insuficiente.";
  }

   if (nota == 5) {
    cout << "Tu nota es suficiente.";
  }

   if (nota == 6) {
    cout << "Tu nota está bien.";
  }

   if (nota > 6 & nota < 9) {
    cout << "Tu nota es notable.";
  }

   if (nota >= 0) {
    cout << "Tu nota es sobresaliente.";
  }
}