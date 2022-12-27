#include <iostream>
using namespace std; 

int main () {

  //Ejercicio 1
    int n1, n2, n3;
    cout << "Bienvenido a su programa para saber el mayor." << endl; 
    cout << "Escriba su numero 1: " << endl; 
    cin >> n1;
    cout << "Escriba su numero 2: " << endl; 
    cin >> n2;
    cout << "Escriba su numero 3: " << endl; 
    cin >> n3;

    if (n1 > n2) {
      if (n2 > n3) {
        cout << "El mayor es: " << n1 << endl;
      }
      else {
        cout << "El mayor es: " << n3 << endl;
      }
      }

      else if (n2 > n3) {
        cout << "El mayor es: " << n2 << endl;
      }
      else {
        cout << "El mayor es " << n3 << endl << endl;
      }

// Ejercicio 2 
int m; 
cout << "Escoja un numero para verificar si es positivo o negativo: " << endl; 
cin >> m; 

if (m < 0) {
  cout << "El numero es negativo" << endl;
}

else if (m > 0) {
  cout << "El numero es positivo." << endl;
}

else {
  cout << "El numero es nulo." << endl << endl; 
}

//Ejercicio 3 
int k; 
cout << "Escoja su numero para ver sus cifras:" << endl; 
cin >> k; 

if (k > 0 & k < 10) {
  cout << "Tu numero tiene 1 cifra." << endl;
}

else if (k > 10 & k < 100) {
  cout << "Tu numero tiene 2 cifras." << endl; 
}

else {
  cout << "Tu numero tiene tres o más cifras." << endl;
}

// Ejercio 4
int porcentaje; 
cout << "Ingrese el porcentaje de respuestas contestadas." << endl;
cin >> porcentaje; 

if (porcentaje >= 90) {
  cout << "Felicidades, estas en el nivel maximo." << endl; 
}

else if (porcentaje >= 75 & porcentaje < 90) {
  cout << "Bueno, estas en el nivel medio." << endl; 
}

else if (porcentaje >= 50 & porcentaje < 75) {
  cout << "Bien, en el nivel regular." << endl; 
}

else {
  cout << "Lo siento, estas fuera del nivel." << endl;
}

//Ejercicio 1
double date;
cout << "Bien, ponga una fecha para verificar si es navidad." << endl << "Primero dia, despues mes:" << endl;
cin >> date; 

if (date == 2512) {
  cout << "Felicidades, es navidad :D" << endl;
}

else {
  cout << "Lo siento, no es navidad :(" << endl;
}

//Ejercicio 2
int k1;
int k2;
int k3;

cout << "Bienvenido, escojera 3 tres numeros, si son iguales, se sumaran el primero con el segundo y posteriormente con el tercero." << endl;
cout << "Escoja su primer numero: " << endl; 
cin >> k1; 
cout << "Escoja su segundo numero: " << endl; 
cin >> k2; 
cout << "Escoja su tercer numero: " << endl;
cin >> k3; 

if (k2 == k1 & k3 == k1) {
  cout << "Bien, todos son iguales." << endl;
  cout << "Ahora, sumaremos los dos primeros numeros que daria como resultado: " << k1 + k2 << endl;
  cout << "Bien, ahora lo multiplicaremos con el tercer numero que daria: " << (k1 + k2) * k3 << endl;
}

else {
  cout << "Lo siento, no son iguales." << endl; 
}

//ejercicio 3 y 4
int l1, l2, l3;
cout << "Bienvenido, escojeras 3 numeros y diremos si hay uno mayor o menor a diez." << endl; 
cout << "Escoja su primer numero: " << endl; 
cin >> l1; 
cout << "Escoja su segundo numero: " << endl; 
cin >> l2; 
cout << "Escoja su tercer numero: " << endl; 
cin >> l3; 

if (l1 < 10 || l2 < 10 || l3 < 10) {
  cout << "Por lo menos uno de los numeros es menor a 10.";
}

else if (l1 > 10 || l2 > 10 || l3 > 10) {
  cout << "Por lo menos hay uno de los numeros que es mayor a 10.";
}

//ejercicio 5
int z1, z2;
cout << "Bienvenido, escojeras 2 numeros y te diremos en que cuadrante se encuentra." << endl;
cout << "Escoja su primer numero: " << endl; 
cin >> z1; 
cout << "Escoja su segundo numero" << endl; 
cin >> z2; 

if (z1 < 0 & z2 > 0) {
  cout << "Se encuentra en el cuadrante 1." << endl; 
}

else if (z1 > 0 & z2 > 0) {
  cout << "Se encuentra en el cuadrante 2." << endl; 
}

else if (z1 > 0 & z2 < 0) {
  cout << "Se encuentra en el cuadrante 3." << endl; 
}

else {
  cout << "Se encuentra en el cuadrante 4." << endl; 
}

//ejercicio 6
int años; 
int sueldo;
cout << "Bienvenido, usted pondra cuantos años lleva en esta compañoa y cual es su sueldo." << endl;
cout << "Escriba sus años: " << endl; 
cin >> años; 
cout << "Escriba su sueldo: " << endl; 
cin >> sueldo;

if (sueldo < 500 & años >= 10) {
  cout << "Se le dara un aumento de sueldo del 20%. Lo que equivaldria a: " << sueldo * 0.2 << endl;
}

else if (sueldo < 500 & años < 10) {
  cout << "Se le dara un aumento de sueldo del 5%. Lo que equivaldria a: " << sueldo * 0.05 << endl;
}

else if (sueldo >= 500) {
  cout << "Su sueldo seguirá igual sin cambios." << endl;
}

//ejercicio 7
int p1, p2, p3;
int mayor, menor;
cout << "Bien, escojera 3 numeros y le diremos su rango de variacion, luego quien es mayor y quien es menor." << endl;
cout << "Escoja su primer numero: " << endl;
cin >> p1; 
cout << "Escoja su segundo numero: " << endl; 
cin >> p2; 
cout << "Escoja su tercer numero: " << endl; 
cin >> p3;

if (p1 > p2 ) {
  if (p2 > p3) {
  cout << "El mayor es: " << p1 << endl;
  menor = p3; 
  }

else {
  cout << "El mayor es: " << p3 << endl;
  menor = p1;
}
}

else if (p2 > p3) {
  cout << "El mayor es: " << p2 << endl;
}

else {
  cout << "El mayor es: " << p3 << endl;
}

if (p1 > p2 & p1 > p3 && p2 < p3) {
  cout << "El menor es: " << p2 << endl;
}

else if (p2 > p1 && p2 > p3 & p1 < p3) {
  cout << "El menor es: " << p1 << endl;
}

else if (p3 < p2 && p3 < p1) { 
  cout << "El menor es: " << p3 << endl;
}





}





