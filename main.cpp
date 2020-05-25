#include "UFunciones.h"

int main()
{ TEntero n;
  cout << "Numero de elementos: ";
  cin>> n;
  vector <TReal>v(n);

  Leer(v);
  Imprimir(v);
  cout <<"\n";
  ImprimirAlReves(v);
  return 0;
}