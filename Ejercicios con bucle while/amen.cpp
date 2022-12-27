#include <iostream>
#include <vector>
using namespace std; 

int main () {

    //Ejercicio 1
    /*
    int alumnos;
    int acumulador = 0;
    int mayores_iguales_7 = 0;
    int menores_a_7 = 0;

    while (acumulador < 10) {
        acumulador++;
        cout << "Ingrese la nota del estudiante " << acumulador << endl;
        cin >> alumnos;
        if (alumnos >= 7) {
            mayores_iguales_7++;
        }
        else {
            menores_a_7++;
        }
    }

    cout << "Finalmente, hubieron " << menores_a_7 << " notas menores a 7." << endl;
    cout << "Y, hubieron " << mayores_iguales_7 << " notas mayores o iguales a 7." << endl;
    */

   //Ejercicio 2
   /*
   int n;
   int acumulador = 0;
   int suma = 0;
   vector<int> alturas = {};
   while (acumulador < 10) {
    acumulador++;
    cout << "Escriba la altura en cm de la persona " << acumulador << endl;
    cin >> n; 
    alturas.push_back(n);
   }

   for (int i = 0; i < 10; i++) {
    suma = suma + alturas[i];
   }

   cout << suma / acumulador;
   */

  //Ejercicio 3 
  /*
  int sueldos = 0; 
  int suma = 0;
  int acumulador = 0; 
  int entre_100_500 = 0;
  int entre_100_300 = 0;
  int mas_300 = 0;

  while (acumulador < 10) {
    acumulador++;
    cout << "Buenas, cuanto cobra el empleado " << acumulador << "?" << endl;
    cin >> sueldos;
    sueldos = sueldos + sueldos;

    if (sueldos >= 100 && sueldos <= 300) {
        entre_100_300++;
    }

    if (sueldos >= 100 && sueldos <= 500) {
        entre_100_500++;
    }

    if (sueldos > 300) {
        mas_300++;
    }
  }

  cout << "La empresa gasta al final " << sueldos << " de pesos en sueldos." << endl;
  cout << "Siendo " << entre_100_300 << " las personas que ganan entre 100 y 300 pesos." << endl << "Tambien, siendo " << entre_100_500 << " las personas que ganan entre 100 y 500 pesos." << endl << "Y, finalmente, siendo " << mas_300 << " las personas que ganan mas de 300 pesos." << endl;*/

  //Ejercicio 5 
  /*
  int n = 8;
  int acumulador = 0;
  int multiplo = 0;

  while (acumulador < 500) {
    acumulador++;
    if (acumulador % n == 0) {
        cout << acumulador << endl;
    }
  } */

  //Ejercicio 6
  /*
  vector<int> lista1 = {10,54,49,10,10,546,7,78,8,94,34,3,56,675,46};
  vector<int> lista2 = {1,1,1,11,1,1,11,1,1,1,11,1,11,1,1};
  int acumulador = 0;
  int acumulador2 = 0;
  int suma1 = 0;
  int suma2 = 0;

  while (acumulador < lista1.size()) {
    acumulador++;
    suma1 = suma1 + lista1[acumulador]; 
  }

  while (acumulador2 < lista2.size()) {
    acumulador2++;
    suma2 = suma2 + lista2[acumulador2];
  }

  if (suma1 > suma2) {
    cout << "La lista con mas valores es la lista 1.";
  }

  else if (suma1 == suma2) {
    cout << "Las listas son iguales.";
  }

  else {
    cout << "La lista con mas valores es la lista 2.";
  } */

  //Ejercicio 7 
  /*
  int n; 
  cout << "Escoja su numero: " << endl;
  cin >> n; 
  int acumulador = 0;

  while (acumulador < n) {
    acumulador++;
    if (acumulador % 2 == 0) {
        cout << acumulador << " es par." << endl;
    }

    else {
        cout << acumulador << " es impar." << endl;
    }
  }
  */




}

  

  


